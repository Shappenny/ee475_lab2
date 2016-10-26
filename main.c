/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>        /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>       /* HiTech General Include File */
#elif defined(__18CXX)
    #include <p18cxxx.h>   /* C18 General Include File */
#endif

#if defined(__XC) || defined(HI_TECH_C)

#include <stdint.h>        /* For uint8_t definition */
#include <stdbool.h>       /* For true/false definition */

#endif

#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp */

/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/* i.e. uint8_t <variable_name>; */

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/
void delay(int s);
void insertTask(TCB* node, TCB** head, TCB** tail);
void buffer1_write();
void reset_counter();
void buffer1_read();
void test_shift_register();
unsigned char spi_Send_Read(unsigned char byte);
unsigned char PORTA_shadow;
unsigned char PORTB_shadow;
unsigned char PORTC_shadow;

void main(void)
{
    TRISB = 0;
    TRISC = 0;
    TRISA = 0;
   
    PORTA_shadow = 0x00;
    PORTB_shadow = 0x00;
    PORTC_shadow = 0x00;
    PORTA = PORTA_shadow;
    PORTB = PORTB_shadow;
    PORTC = PORTC_shadow;

    PORTA = 0xFF;



    //OpenSPI(SPI_FOSC_16, MODE_00, SMPMID); //open SPI1
    PORTA = 0x00;
    ADCON1 = 0x0F;        // set up PORTA to be digital I/Os
    TRISA = 0x02;        // PORTA<7.2,0> outputs PORTA<1> input
    SPI1_Init();
    SPI1_Enable();
/*    TRISCbits.TRISC3 = 0;    // SDO output
    TRISCbits.TRISC5 = 0;   // SCK output
    TRISCbits.TRISC2 = 0;    // CSN output
    TRISCbits.TRISC1 = 0;    // CE output
    SPI_CSN = 1;        // CSN high
    SPI_SCK = 0;        // SCK low
    SPI_CE  = 0;        // CE low
    nop();
 */

   // test_shift_register();

    test_spi();

    /* Define TCBs */
    TCB SpiComsTCB;
    TCB* TCBPtr;            /*ptr to active TCB */

    /* Populate TCBs */
    SpiComsTCB.taskDataPtr = (void*)&SpiCommsData;
    SpiComsTCB.taskPtr = SpiComms;
    SpiComsTCB.next = NULL;
    SpiComsTCB.prev = NULL;

    /* Set up task queue */
    TCB* taskQueueHead = NULL;
    TCB* taskQueueTail = NULL;

    insertTask(&SpiComsTCB, &taskQueueHead, &taskQueueTail);

    /* Run... forever!!! */
    while(1)
    {
        // Get pointer to first task
        TCBPtr = taskQueueHead;
        
        // Loop through task queue & perform each task
        while (TCBPtr != NULL)
        {
            TCBPtr->taskPtr( (TCBPtr->taskDataPtr) );
            TCBPtr = TCBPtr->next;
        }
    }

//    reset_counter();
//    buffer1_write();
//    int i = 0;
//    while(1)
//    {
//        PORTA_shadow = PORTA_shadow ^ 1;
//        PORTA = PORTA_shadow;
//        delay(1000);
//        PORTA_shadow = PORTA_shadow ^ 1;
//        PORTA = PORTA_shadow;
//        delay(1000);
//        
//        
////        
////        delay(10000);
////        PORTB = PORTB & ~0x10;
////        delay(10000);
////        
////        PORTA = i;
////        //buffer1_write();
//        i++;
//        if (i == 1000) {
//            reset_counter();
//            buffer1_read();
//        }
//        if (i == 2000) {
//            reset_counter();
//            buffer1_write();
//            i = 0;
//        }
//    }


    return EXIT_SUCCESS;
}

void delay(int s) {
    int a = 0;
    int i;
    for (i = 0; i < s; i++) {
        a++;
    }
}

void insertTask(TCB* node, TCB** head, TCB** tail)
{
    if(NULL == (*head)) // If the head pointer is pointing to nothing
    {
        *head = node; // set the head and tail pointers to point to this node
        *tail = node;
    }
    else // otherwise, head is not NULL, add the node to the end of the list
    {
        (*tail)->next = node;
        node->prev = *tail; // note that the tail pointer is still pointing
                            // to the prior last node at this point
        *tail = node;       // update the tail pointer
    }
    // Always set node next pointer to null for end of list
    node->next = NULL;
    return;
}

void reset_counter() {
    PORTA_shadow = PORTA_shadow | (1 << 1);
    PORTA = PORTA_shadow;
    delay(10000);
    PORTA_shadow = PORTA_shadow & ~(1 << 1);
    PORTA = PORTA_shadow;
    delay(10000);
}


void buffer1_write() {
    // Bits of PORTC:
    // 0: cs = 0
    // 1: oe = 1
    // 2: we = 0
    // 3: data_enable = 1
    // 4: count = 0
    // 5: rst_cntr = 0
    
    
    
    
    // PORTA:
    // 2: we
    // 3: oe
    // 4: cs
    // 5: tristate en
    // 6: tristate en
   
    // we = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 2);
    
    // oe = 1
    PORTA_shadow = PORTA_shadow | (1 << 3);
    
    // cs = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 4);
    
    // en = 1
    PORTA_shadow = PORTA_shadow | (1 << 5);
    PORTA_shadow = PORTA_shadow | (1 << 6);
    PORTA = PORTA_shadow;
	return;
}

unsigned char spi_Send_Read(unsigned char byte) {
    SSPBUF = byte;
    while (!DataRdySpi()) {
        ;
    }
    return SSPBUF;
}

void test_shift_register() {
    // PORTA:
    // clk = a5
    // data = a6
    // clear = a7
    
    // clear register
    PORTC_shadow = PORTC_shadow & ~(1 << 7);
    PORTC = PORTC_shadow;
    delay(100);
    PORTC_shadow = PORTC_shadow | (1 << 7);
    PORTC = PORTC_shadow;
    delay(100);
    
    
    while(1) {
        // set data = 1
        PORTC_shadow = PORTC_shadow | (1 << 6);
        PORTC = PORTC_shadow;
        // Clock cycle
        PORTC_shadow = PORTC_shadow | (1 << 5);
        PORTC = PORTC_shadow;
        delay(1000);
        PORTC_shadow = PORTC_shadow & ~(1 << 5);
        PORTC = PORTC_shadow;
        delay(1000);
        
        // set data  = 0
        PORTC_shadow = PORTC_shadow & ~(1 << 6);
        PORTC = PORTC_shadow;
        // Clock cycle
        PORTC_shadow = PORTC_shadow | (1 << 5);
        PORTC = PORTC_shadow;
        delay(1000);
        PORTC_shadow = PORTC_shadow & ~(1 << 5);
        PORTC = PORTC_shadow;
        delay(1000);
        
    }
    return;
    
}

void test_spi() {
    //write TX_ADDRESS register
    SPI_CSN = 0;            //CSN low
    spi_Send_Read(0x30);
    spi_Send_Read(0x11);
    spi_Send_Read(0x22);
    spi_Send_Read(0x33);
    spi_Send_Read(0x44);
    spi_Send_Read(0x55);
    SPI_CSN = 1;            //CSN high
 
 
    //read TX_ADDRESS register
    //Check that values are correct using the MPLAB debugger
    SPI_CSN = 0;                      //CSN low
    status = spi_Send_Read(0x10);
    data[0] = spi_Send_Read(0x00);    // 0x11
    data[1] = spi_Send_Read(0x00);    // 0x22
    data[2] = spi_Send_Read(0x00);    // 0x33
    data[3] = spi_Send_Read(0x00);    // 0x44
    data[4] = spi_Send_Read(0x00);    // 0x55
    SPI_CSN = 1;                      // CSN high
}


//
//void buffer2_write() {
//
//}
//
//
//void buffer3_write() {
//    
//}
//
void buffer1_read() {
    // Bits of PORTB:
    // 0: cs = 0
    // 1: oe = 0
    // 2: we = 1
    // 3: data_enable = 0
    // 4: n_data_enable = 1 
    // TODO get inverter to eliminate n_data_enable
    
   
    // PORTA:
    // 2: we
    // 3: oe
    // 4: cs
    // 5: tristate en
    // 6: tristate en
   
    // we = 1
    PORTA_shadow = PORTA_shadow | (1 << 2);
    
    // oe = 1
    PORTA_shadow = PORTA_shadow & ~(1 << 3);
    
    // cs = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 4);
    
    // en = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 5);
    PORTA_shadow = PORTA_shadow & ~(1 << 6);
    PORTA = PORTA_shadow;
    return;
}
//
//
//void buffer2_read() {
//    
//}
//
//
//void buffer3_read() {
//    
//}
//
