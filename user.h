/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/

/* General */
#define nop() 		_asm nop _endasm	/* no-op */

/* SPI */
#define SPI_SCK		LATBbits.LATB1//LATCbits.LATC3		/* Clock pin, PORTB pin 0, PORTC pin 3 */
#define SPI_SI		PORTBbits.RB2//LATCbits.LATC4//PORTCbits.RC4//		/* Serial input pin, PORTB pin 1, PORTC pin 4 */
#define SPI_SO		LATBbits.LATB3//LATCbits.LATC5//		/* Serial output pin, PORTB pin 2, PORTC pin 5 */
#define SPI_CSN		LATBbits.LATB0//LATAbits.LATA5//		/* CSN output pin, PORTB pin 3, PORTC pin 2 */
#define SYNC_SEQ	0x2C8				/* SPI synchronize sequence sent before data */
 
 // ------------------ 
 // SPI Configuration 
 // ------------------ 
 
 // MSSP1: SPI1 Config and control 
 #define    SPI1_CONFIG         0b00000010    // Master, Clock = FOSC/64, Disabled 
 #define    SPI1_Enable()       {SSP2CON1bits.SSPEN=1;}//{SSP1CON1bits.SSPEN=1;} 
 #define    SPI1_Disable()		{SSP2CON1bits.SSPEN=0;} 
 // SPI1 interrupt control 
 #define SPI1_IntEnable()		{PIR1bits.SSP1IF = 0; PIE1bits.SSP1IE=1; INTCONbits.PEIE = 1;} 
 #define SPI1_IntDisable()    	{PIE1bits.SSP1IE=0;} 
 
 // Init MSSP1 in SPI mode and I/O pins 
 #define    SPI1_Init()            {SSP2STAT =0x40; SSP2CON1=SPI1_CONFIG;}//INIT_SPI1_IO(); SSP1CON1 = SPI1_CONFIG; SSP1STATbits.CKE=1; PIR1bits.SSP1IF=0;} 

/* TODO Application specific user parameters used in user.c may go here */
#define UPLOAD_REQ0 0xAB
#define UPLOAD_REQ1 0xCD
#define UPLOAD_ACK0	0xEF
#define UPLOAD_ACK1 0x01

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/

/* TODO User level functions prototypes (i.e. InitApp) go here */

void InitApp(void);         			/* I/O and Peripheral Initialization */
void CollectData(void *TaskDataPtr);
void WriteSram(void *TaskDataPtr);
void ReadSram(void *TaskDataPtr);
void SpiComms(void *TaskDataPtr);
unsigned char SpiRead(void);
void SpiWrite(unsigned char byte);
unsigned char spi_Send_Read(unsigned char byte);

/* TODO Define TCB data structs here */
//  Declare a TCB structure
typedef struct 
{
	void* taskDataPtr; 		  	/* ptr to generic data */
	void (*taskPtr)(void*);    	/* ptr to generic function */
	struct TCB* next;
	struct TCB* prev;
}
TCB;

typedef struct WriteSramData
{
	uint8_t sramChip;		/* 0 to 2 */
	uint16_t startAddr;		/* 0 to 2047 */
	uintptr_t dataPtr;		/* ptr to write_data */
} WriteSramData;

typedef struct ReadSramData
{
	uint8_t sramChip;		/* 0 to 2 */
	uint16_t startAddr;		/* 0 to 2047 */
	uintptr_t dataPtr;		/* ptr to read_data */
} ReadSramData;

typedef struct SpiCommsData
{
	uint16_t writeSize;		/* number of bytes to write */
	void** writeData;	/* ptr to write_data */
	void* readData;		/* ptr to read_data */
} SpiCommsData;


/* SSPSTAT REGISTER  Included for reference */

// Master SPI mode only
//#define   SMPEND        0b10000000           // Input data sample at end of data out             
//#define   SMPMID        0b00000000           // Input data sample at middle of data out
//
//
//#define   MODE_00       0b00000000              // Setting for SPI bus Mode 0,0
////CKE           0x40                   // SSPSTAT register 
////CKP           0x00                   // SSPCON1 register 
//
//#define   MODE_01       0b00000001              // Setting for SPI bus Mode 0,1
////CKE           0x00                   // SSPSTAT register 
////CKP           0x00                   // SSPCON1 register
//
//#define   MODE_10       0b00000010              // Setting for SPI bus Mode 1,0
////CKE           0x40                   // SSPSTAT register
////CKP           0x10                   // SSPCON1 register
//
//#define   MODE_11       0b00000011              // Setting for SPI bus Mode 1,1
////CKE           0x00                   // SSPSTAT register
////CKP           0x10                   // SSPCON1 register
//
///* SSPCON1 REGISTER */
//#define   SSPENB        0b00100000           // Enable serial port and configures SCK, SDO, SDI
//
//#define   SPI_FOSC_4    0b00000000              // SPI Master mode, clock = Fosc/4
//#define   SPI_FOSC_16   0b00000001              // SPI Master mode, clock = Fosc/16
//#define   SPI_FOSC_64   0b00000010              // SPI Master mode, clock = Fosc/64
//#define   SPI_FOSC_TMR2 0b00000011              // SPI Master mode, clock = TMR2 output/2
//#define   SLV_SSON      0b00000100              // SPI Slave mode, /SS pin control enabled
//#define   SLV_SSOFF     0b00000101              // SPI Slave mode, /SS pin control disabled
////************************************************************************************************//
//
///*  25Cxxx EEPROM instruction set */
//#define   SPI_WREN          6              // write enable latch
//#define   SPI_WRDI          4              // reset the write enable latch
//#define   SPI_RDSR          5              // read status register
//#define   SPI_WRSR          1              // write status register
//#define   SPI_READ          3              // read data from memory
//#define   SPI_WRITE         2              // write data to memory
//
///*  Bits within status register of 25Cxxx */
//#define   WIP           0              // write in progress status
//#define   WEL           1              // write enable latch status
//#define   BP0           2              // block protection bit status
//#define   BP1           3              // block protection bit status