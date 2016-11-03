/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#elif defined(__18CXX)
    #include <p18cxxx.h>    /* C18 General Include File */
#endif

#if defined(__XC) || defined(HI_TECH_C)

#include <stdint.h>         /* For uint8_t definition */
#include <stdbool.h>        /* For true/false definition */

#endif

#include "user.h"

/******************************************************************************/
/* User Functions                                                             */
/******************************************************************************/

/* <Initialize variables in user.h and insert code for user algorithms.> */
unsigned char nextByte;
unsigned char uploadReq;
extern unsigned char canSend;
extern unsigned char DATA_COLLECT;


void InitApp(void)
{
    /* Define global vars */
    nextByte = 0;
    uploadReq = 0;
    canSend = 0;
    DATA_COLLECT = 0;
    
    /* TODO Initialize User Ports/Peripherals/Project here */

    /* Setup analog functionality and port direction */

    /* Initialize peripherals */

    /* Configure the IPEN bit (1=on) in RCON to turn on/off int priorities */

    /* Enable interrupts */
}

void CollectData(void *taskDataPtr)
{

}

void WriteSram(void *taskDataPtr)
{

}

void ReadSram(void *taskDataPtr)
{

}

void SpiComms(void *taskDataPtr)
{
	SpiCommsData *data = (SpiCommsData*) taskDataPtr;
    // Check if we have permission to send
    if (canSend)
    {
        // Send synch sequence
        SpiWrite(SYNC_SEQ);
        // Send data in 1 byte packets
        for (uint16_t i = 0; i < data->writeSize; ++i)
        {
            SpiWrite((*((unsigned char *) data->writeData) >> (8*i)) & 0xFF);
        }
    }
}

unsigned char SpiRead(void)
{
	/* Read a byte, send dummy byte */
    return spi_Send_Read(0x00);

}

void SpiWrite(unsigned char byte)
{
	/* Send a byte, ignore read value */
	spi_Send_Read(byte);
}

unsigned char spi_Send_Read(unsigned char byte)
{
    SSP2BUF = byte;
    while (!SSP2STATbits.BF);
    char data = SSP2BUF;
    // Check for commands from the surface ship
    if (byte == START_RX)
    {
        // Send acknowledgement to ship and start data collection
        nextByte = START_ACK;
        DATA_COLLECT = 1;
    } else if (byte == STOP_RX)
    {
        // Send acknowledgement to ship and stop data collection
        nextByte = STOP_ACK;
        DATA_COLLECT = 0;
    }
    SSP2BUF = nextByte;
    while (!SSP2STATbits.BF);
    return SSP2BUF;
}
