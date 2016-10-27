//
// /*
// ** test.c
// ** SPI test program for PIC18F4520 and nRF24L01 or nRF24L01+
// ** Checks SPI comms between PIC and wireless chip
// ** 
// ** RA0    LED (output)
// ** RA1    PB (input)
// */
// #if defined(__XC)
//    #include <xc.h>        /* XC8 General Include File */
//#elif defined(HI_TECH_C)
//    #include <htc.h>       /* HiTech General Include File */
//#elif defined(__18CXX)
//    #include <p18cxxx.h>   /* C18 General Include File */
//#endif
//
//#if defined(__XC) || defined(HI_TECH_C)
//
//#include <stdint.h>        /* For uint8_t definition */
//#include <stdbool.h>       /* For true/false definition */
//
//#endif
//
//#include "system.h"        /* System funct/params, like osc/peripheral config */
//#include "user.h"          /* User funct/params, such as InitApp */
//#include "spi.h"
//#include "C:/MCC18/h/pconfig.h"
// //#include <p18f4520.h>
// 
// //function prototypes
// unsigned char spi_Send_Read(unsigned char);
// void dly(void);
// 
// // Defines
// #define SPI_SCK        LATCbits.LATC3        // Clock pin, PORTC pin 3 
// #define SPI_SO        LATCbits.LATC5        // Serial output pin, PORTC pin 5 
// #define SPI_SI        PORTCbits.RC4        // Serial input pin, PORTC pin 4 
// #define SPI_CSN        LATCbits.LATC2        // CSN output pin, PORTC pin 2
// #define SPI_CE        LATCbits.LATC1        // CE output pin, PORTC pin 1
// #define SPI_IRQ        PORTBbits.RB0        // IRQ input pin, PORTB pin 0
// #define SPI_SCALE    4                      // postscaling of signal 
// #define LED            LATAbits.LATA0
// #define PB            PORTAbits.RA1
// 
// 
// // Macros
// #define nop() _asm nop _endasm
// 
// void main(void)
// {
//     unsigned char status = 0;
//     unsigned char data[5];
//     int i;
// 
//     // run internal oscillator at 8 MHz
//     OSCCON = OSCCON | 0b01110000;
//     while (!OSCCONbits.IOFS)    // wait for IOFS to go high
//         ;
// 
//     OpenSPI(SPI_FOSC_16, MODE_00, SMPMID); //open SPI1
//     PORTA = 0x00;
//     ADCON1 = 0x0F;        // set up PORTA to be digital I/Os
//     TRISA = 0x02;        // PORTA<7.2,0> outputs PORTA<1> input
//     TRISCbits.TRISC3 = 0;    // SDO output
//     TRISCbits.TRISC5 = 0;   // SCK output
//     TRISCbits.TRISC2 = 0;    // CSN output
//     TRISCbits.TRISC1 = 0;    // CE output
//     SPI_CSN = 1;        // CSN high
//     SPI_SCK = 0;        // SCK low
//     SPI_CE    = 0;        // CE low
//     //nop();
// 
//     //write TX_ADDRESS register
//     SPI_CSN = 0;            //CSN low
//     spi_Send_Read(0x30);
//     spi_Send_Read(0x11);
//     spi_Send_Read(0x22);
//     spi_Send_Read(0x33);
//     spi_Send_Read(0x44);
//     spi_Send_Read(0x55);
//     SPI_CSN = 1;            //CSN high
// 
// 
//     //read TX_ADDRESS register
//     //Check that values are correct using the MPLAB debugger
//     SPI_CSN = 0;            //CSN low
//     status = spi_Send_Read(0x10);
//     data[0] = spi_Send_Read(0x00);    // 0x11
//     data[1] = spi_Send_Read(0x00);    // 0x22
//     data[2] = spi_Send_Read(0x00);    // 0x33
//     data[3] = spi_Send_Read(0x00);    // 0x44
//     data[4] = spi_Send_Read(0x00);    // 0x55
//     SPI_CSN = 1;                    // CSN high
// 
//     while (1)
//     {
//         LED = 1;
//         dly();
//         LED = 0;
//         dly();
//     }
// }
// 
// 
// unsigned char spi_Send_Read(unsigned char byte)
// {
//     SSPBUF = byte;    
//     while(!DataRdySPI())
//         ;    
//     return SSPBUF;
// }
// 
// void dly(void)
// {
//     unsigned int i;
// 
//     for (i = 0; i < 50000; i++)
//         ;
// }    

 
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

#include <stdio.h>
#include "system.h"        /* System funct/params, like osc/peripheral config */
#include "user.h"          /* User funct/params, such as InitApp */
//#include "spi.h"
//#include "C:/MCC18/h/pconfig.h"
/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/* i.e. uint8_t <variable_name>; */
extern unsigned char master = 1;
extern unsigned char canSend = 0;

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/
void delay(int s);
void insertTask(TCB* node, TCB** head, TCB** tail);
void sram_write(unsigned int, unsigned int);
void reset_counter();
unsigned int sram_read(unsigned int);
void test_shift_register();
void test_spi();
void address_select(unsigned int);
void set_s2p_shift_register(unsigned int data);
void toggle_buffer_clock();
unsigned int get_data_p2s_register();
unsigned char spi_Send_Read(unsigned char byte);
unsigned char PORTA_shadow;
unsigned char PORTB_shadow;
unsigned char PORTC_shadow;

void main(void)
{
    master = 1;
    canSend = 0;
    
    // Need B1 as input
    TRISB = 0x00;
    TRISC = 0x10;
    TRISA = 0x00;
   
    PORTA_shadow = 0x00 | (1 << 5);
    PORTB_shadow = 0x00;
    PORTC_shadow = 0x00;
    //PORTA = PORTA_shadow;
    //PORTB = PORTB_shadow;
    //PORTC = PORTC_shadow;

    //PORTA = 0xFF;
    
    SPI1_Init();
    SPI1_Enable();

//
//
//    //OpenSPI(SPI_FOSC_16, MODE_00, SMPMID); //open SPI1
//    PORTA = 0x00;
//    ADCON1 = 0x0F;        // set up PORTA to be digital I/Os
//    TRISA = 0x02;        // PORTA<7.2,0> outputs PORTA<1> input
//    SPI1_Init();
//    SPI1_Enable();
///*    TRISCbits.TRISC3 = 0;    // SDO output
//    TRISCbits.TRISC5 = 0;   // SCK output
//    TRISCbits.TRISC2 = 0;    // CSN output
//    TRISCbits.TRISC1 = 0;    // CE output
//    SPI_CSN = 1;        // CSN high
//    SPI_SCK = 0;        // SCK low
//    SPI_CE  = 0;        // CE low
//    nop();
// */
//
//   // test_shift_register();
//
//    test_spi();
//
//    /* Define TCBs */
//    TCB SpiComsTCB;
//    TCB* TCBPtr;            /*ptr to active TCB */
//    
//    /* Define data variables */
//    uint16_t writeSize = 0;
//    uint8_t spiWriteData0[256] = {0};    /* Holds data to be written to SPI */
//    uint8_t spiWriteData1[256] = {0};
//    uint8_t spiWriteData2[160] = {0};
//    uint8_t spiWriteData3[8] = {0};
//    uint8_t spiReadData = 0;       /* Holds command from surface ship */
//    
//    /* Populate data structs */
//    //SpiCommsData spiCommsData = {writeSize, &spiWriteData, &spiReadData};
//
//    /* Populate TCBs */
//    //SpiComsTCB.taskDataPtr = (void*)&spiCommsData;
//    //SpiComsTCB.taskPtr = SpiComms;
//    //SpiComsTCB.next = NULL;
//    //SpiComsTCB.prev = NULL;
//
//    /* Set up task queue */
//    TCB* taskQueueHead = NULL;
//    TCB* taskQueueTail = NULL;
//
//    //insertTask(&SpiComsTCB, &taskQueueHead, &taskQueueTail);
    
    
    /* Run... forever!!! */
    unsigned int i = 0;
    while(1)
    {
        /*
        sram_write(0xaf, 0x00);
        sram_write(0x44, 0x01);
        sram_write(0xad, 0x02);
        
        
        sram_read(0x00);
        sram_read(0x01);
        sram_read(0x02);
        */
        test_spi();
        delay(10000);
        
        // Get pointer to first task
//        TCBPtr = taskQueueHead;
//        
//        // Loop through task queue & perform each task
//        while (TCBPtr != NULL)
//        {
//            TCBPtr->taskPtr( (TCBPtr->taskDataPtr) );
//            TCBPtr = TCBPtr->next;
//        }
        
//        address_select(0x744);
//        delay(50000);
//        address_select(0x0a6);
//        delay(50000);
//        address_select(0x124);
//        delay(50000);
//        address_select(0x350);
//        delay(50000);
//        address_select(0x213);
//        delay(50000);
//        address_select(0x52a);
//        delay(50000);
//        address_select(0x777);
//        delay(50000);
//        i++;
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


}

void address_select(unsigned int n) {
        PORTC = (n & 0xFF);
        PORTB_shadow = (PORTB_shadow & (0x1F)) | ((n >> 3) & 0xe0);
        PORTB = PORTB_shadow;
        delay(1000);
        return;
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

void set_s2p_shift_register(unsigned int data) {
    int i;
    unsigned char serial_out = 0;
    int shift = 7;
    for (i = 0; i < 8; i++) {
        serial_out = (data >> shift) & 0x1;
        PORTA_shadow = (PORTA_shadow & ~(1 << 1)) | (serial_out << 1);
        PORTA = PORTA_shadow;
        toggle_buffer_clock();
        shift = shift - 1; 
    }
    return;
}

void toggle_buffer_clock() {
    PORTA_shadow = PORTA_shadow | 1;
    PORTA = PORTA_shadow;
    delay(1000);
    PORTA_shadow = PORTA_shadow & ~1;
    PORTA = PORTA_shadow;
    delay(1000);
    return;
}
void sram_write(unsigned int data, unsigned int address) {
    // oe = 1
    PORTA_shadow = PORTA_shadow | (1 << 3);
    PORTA = PORTA_shadow;
    address_select(address);
    set_s2p_shift_register(data);
    // we = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 2);
    PORTA = PORTA_shadow;
    delay(1000);
    // we = 1
    PORTA_shadow = PORTA_shadow | (1 << 2);
    PORTA = PORTA_shadow;
    delay(1000);
	return;
}

void test_shift_register() {
    return;
}

void test_spi() {
    unsigned char status = 0;
    unsigned char data[6];
    //write TX_ADDRESS register
    SPI_CSN = 0;            //CSN low
    data[0] = spi_Send_Read(0xAF);
    unsigned char portc_bit4 = PORTCbits.RC4;//spi_Send_Read(0xAF);
    delay(1000);
    data[1] = spi_Send_Read(0xAF);
    delay(1000);
    data[2] = spi_Send_Read(0xAF);
    delay(1000);
    data[3] = spi_Send_Read(0xAF);
    delay(1000);
    data[4] = spi_Send_Read(0xAF);
    delay(1000);
    data[5] = spi_Send_Read(0xAF);
    SPI_CSN = 1;            //CSN high
    printf("%d", PORTCbits.RC4);
    
    delay(1000);
 
    //read TX_ADDRESS register
    //Check that values are correct using the MPLAB debugger
    SPI_CSN = 0;                      //CSN low
    status = spi_Send_Read(0x10);
    delay(1000);
    data[0] = spi_Send_Read(0x00);    // 0x11
    delay(1000);
    data[1] = spi_Send_Read(0x00);    // 0x22
    delay(1000);
    data[2] = spi_Send_Read(0x00);    // 0x33
    delay(1000);
    data[3] = spi_Send_Read(0x00);    // 0x44
    delay(1000);
    data[4] = spi_Send_Read(0x00);    // 0x55
    SPI_CSN = 1;                      // CSN high
}

unsigned int get_data_p2s_register() {
    // oe = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 3);
    PORTA = PORTA_shadow;
    delay(1000);
    // PL = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 5);
    PORTA = PORTA_shadow;
    delay(1000);
    // PL = 1;
    PORTA_shadow = PORTA_shadow | (1 << 5);
    PORTA = PORTA_shadow;
    delay(1000);
     // oe = 1
    PORTA_shadow = PORTA_shadow | (1 << 3);
    PORTA = PORTA_shadow;
    int i;
    unsigned int data = 0;
    for (int i = 0; i < 8; i++) {
        toggle_buffer_clock();
        data = data | ((PORTA >> 3) & 1);
        data = data << 1;
    }
    return data;
    
}
unsigned int sram_read(unsigned int address) {
    // we = 1
    PORTA_shadow = PORTA_shadow | (1 << 2);
    PORTA = PORTA_shadow;
    address_select(address);
    
    
    // oe = 0
//    PORTA_shadow = PORTA_shadow & ~(1 << 3);
//    PORTA = PORTA_shadow;
    unsigned int data =  get_data_p2s_register();
//    // oe = 1
//    PORTA_shadow = PORTA_shadow | (1 << 3);
//    PORTA = PORTA_shadow;
    return data;

}
