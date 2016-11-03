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


/******************************************************************************/
/* User Global Variable Declaration                                           */
/******************************************************************************/

/* i.e. uint8_t <variable_name>; */
extern unsigned char master = 1;
extern unsigned char canSend = 0;
unsigned char activeBufferId = 1;
unsigned char DATA_COLLECT, nextByte;

/******************************************************************************/
/* Main Program                                                               */
/******************************************************************************/
void delay(int s);
void insertTask(TCB* node, TCB** head, TCB** tail);
void sram_write(unsigned int, unsigned int);
void reset_counter();
unsigned char sram_read(unsigned int);
void test_shift_register();
void test_spi();
void address_select(unsigned int);
void set_s2p_shift_register(unsigned int data);
void toggle_buffer_clock();
unsigned char get_data_p2s_register();
unsigned char spi_Send_Read(unsigned char byte);
void ADC_init();
unsigned char sample_adc(unsigned char channel);
unsigned char PORTA_shadow, PORTB_shadow, PORTC_shadow;
unsigned char ADCON0_SHAD, ADCON1_SHAD, ADCON2_SHAD;

void main(void)
{
    master = 1;
    canSend = 0;
    
    // RA1 = serial in from buffer, RA4 = serial in from SRAM, RA5 = SRAM I/O tri-state buffer
    TRISA = 0x10;
    // Need B2 as input for SPI IN, B4 as pot input
    TRISB = 0x14;
    TRISC = 0x00;
    
    ANSELB = 0x00;
    // Set ADC
    ANSELBbits.ANSB4 = 1;

    PORTA_shadow = 0x00;
    PORTB_shadow = 0x00;
    PORTC_shadow = 0x00;
    //PORTA = PORTA_shadow;
    //PORTB = PORTB_shadow;
    //PORTC = PORTC_shadow;

    //PORTA = 0xFF;
    
    //InitApp();
    
    SPI1_Init();
    SPI1_Enable();
    
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
    ADC_init();

    
    while(1)
    {
        // If we can collect data, do so
//        if (COLLECT_DATA == 1)
//        {
            unsigned char a;
            for (int i = 0; i < 256; i++) {
                a = sample_adc(11);
                sram_write(10, i);
                //sram_write(a, i * activeBufferId);
                // Buffer 80% full; request upload
                if (i == 30) //820) 
                {
                    // Ask permission from surface
                    SPI_CSN = 0;
                    spi_Send_Read(UPLOAD_REQ);
                    //spi_Send_Read(UPLOAD_REQ1);
                    SPI_CSN = 1;
                    // Wait for response
                    delay(100);
                    SPI_CSN = 0;
                    unsigned char ack = spi_Send_Read(UPLOAD_REQ);                    unsigned char ack1 = spi_Send_Read(UPLOAD_REQ0);
                    //unsigned char ack1 = spi_Send_Read(UPLOAD_REQ0);                    
                    //unsigned char ack0 = spi_Send_Read(UPLOAD_REQ1);
                    SPI_CSN = 1;
                    canSend = (ack == UPLOAD_REQ);// && (ack1 == UPLOAD_ACK1);
                // Buffer 90% full; start collection on second buffer
                } else if (i == 922) 
                {
                    // Switch buffer
                    activeBufferId = (activeBufferId == 2) ? 1 : 2;
                }
            }
//        }
        
        // Upload to surface ship, if we have permission
        if (canSend)
        {
            // Send synchronization sequence
            SPI_CSN = 0;
            spi_Send_Read(SYNC_SEQ >> 8);
            delay(10);
            spi_Send_Read(SYNC_SEQ);
            SPI_CSN = 1;
            for (int i = 0; i < 256; i++) {
                int data = sram_read(i);
                delay(10);
                SPI_CSN = 0;
                spi_Send_Read(data);
                SPI_CSN = 1;
                delay(10);
            }
            canSend = 0;
        }
    }
}

void ADC_init()
{
    ADCON0_SHAD &= 0x81;
    ADCON0_SHAD |= (0x2D);
    ADCON0 = ADCON0_SHAD;
    ADCON1_SHAD &= 0x81;
    ADCON1_SHAD |= (0x00);
    ADCON1 = ADCON1_SHAD;
    ADCON2_SHAD &= 0x81;
    ADCON2_SHAD |= (0x00);
    ADCON2 = ADCON2_SHAD;
//    ADCON0 = 0x59;             
//    ADCON1 = 0x00; 
//    ADCON2 = 0x00;
    ADFM = 1;
}

unsigned char sample_adc(unsigned char channel) {
    //ADCON0 &= 0x81;                 //Clearing channel selection bits
    //ADCON0 |= channel << 3;         //Setting channel selection bits
    // Upload to surface ship, if we have permission
    //  while we wait for the ADC reading
//    if (canSend)
//    {
//        // Send synchronization sequence
//        SPI_CSN = 0;
//        spi_Send_Read(SYNC_SEQ >> 8);
//        spi_Send_Read(SYNC_SEQ);
//        SPI_CSN = 1;
//        unsigned char data;
//        for (int i = 0; i < 1024; i++) {
//            data = sram_read(i * activeBufferId);
//            //delay(100);
//            SPI_CSN = 0;
//            spi_Send_Read(data);
//            SPI_CSN = 1;
//            //delay(1000);
//        }
//        canSend = 0;
//    } else {
//        delay(20000);                    //Acquisition time to charge hold capacitor
//    }
    delay(20000);
    GO_nDONE = 1;                   //Initializes A/D conversion
    while(GO_nDONE);                //Waiting for conversion to complete
    return ((ADRESH<<8)+ADRESL);    //Return result
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
    
    
    // buffer en = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 5);
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
    unsigned char portc_bit4 = PORTBbits.RB2; //spi_Send_Read(0xAF);
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
    
    //delay(1000);
 
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

unsigned char get_data_p2s_register() {
    // oe = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 3);
    PORTA = PORTA_shadow;
    delay(1000);
    // PL = 0
    PORTA_shadow = PORTA_shadow & ~(1 << 6);
    PORTA = PORTA_shadow;
    delay(1000);
    // PL = 1;
    PORTA_shadow = PORTA_shadow | (1 << 6);
    PORTA = PORTA_shadow;
    delay(1000);
     // oe = 1
//    PORTA_shadow = PORTA_shadow | (1 << 3);
//    PORTA = PORTA_shadow;
    int i;
    unsigned char data = 0x00;// = PORTAbits.RA4;
    for (int i = 0; i < 8; i++) {
        data = data | (PORTAbits.RA4 << i);
        toggle_buffer_clock();
    }
    return data;
    
}
unsigned char sram_read(unsigned int address) {
    // we = 1
    PORTA_shadow = PORTA_shadow | (1 << 2);
    PORTA = PORTA_shadow;
    address_select(address);
    
    // buffer en = 1
    
    PORTA_shadow = PORTA_shadow | (1 << 5);
    PORTA = PORTA_shadow;
    
//    // s2p buffer input = 0
//    PORTA_shadow = PORTA_shadow | (1 << 1);
//    PORTA = PORTA_shadow;
    
   
    unsigned char data =  get_data_p2s_register();
    return data;

}
