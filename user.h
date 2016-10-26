/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/

/* General */
#define nop() 		_asm nop _endasm	/* no-op */
#define NULL		0x00
/* SPI */
#define SPI_SCK		LATCbits.LATC3		/* Clock pin, PORTC pin 3 */
#define SPI_SO		LATCbits.LATC5		/* Serial output pin, PORTC pin 5 */
#define SPI_SI		PORTCbits.RC4		/* Serial input pin, PORTC pin 4 */
#define SPI_CSN		LATCbits.LATC2		/* CSN output pin, PORTC pin 2 */
#define SPI_CE		LATCbits.LATC1		/* CE output pin, PORTC pin 1 */
#define SPI_IRQ		PORTBbits.RB0		/* IRQ input pin, PORTB pin 0 */
#define SPI_SCALE	4					/* postscaling of signal */
#define SYNC_SEQ	0x2C8				/* SPI synchronize sequence sent before data */

// MSSP1: SPI1 (MCP923S17 + LCD / Serial EEPROM ) 
 #define    SPI1_TRIS    TRISCbits 
 #define    SPI1_CLK    RC3     
 #define    SPI1_SDI    RC4 
 #define    SPI1_SDO    RC5 
 
 // INIT I/O for MSSP1 SPI bus, includes I/O for attached devices 
 #define    INIT_SPI1_IO()    {SPI_SCK=0; SPI_SO=0; SPI_SI=1;} 
 
 // ------------------ 
 // SPI Configuration 
 // ------------------ 
 
 // MSSP1: SPI1 Config and control 
 #define    SPI1_CONFIG         0b00000010    // Master, Clock = FOSC/64, Disabled 
 #define    SPI1_Enable()       {SSP1CON1bits.SSPEN=1;} 
 #define    SPI1_Disable()		{SSP1CON1bits.SSPEN=0;} 
 // SPI1 interrupt control 
 #define SPI1_IntEnable()		{PIR1bits.SSP1IF = 0; PIE1bits.SSP1IE=1; INTCONbits.PEIE = 1;} 
 #define SPI1_IntDisable()    	{PIE1bits.SSP1IE=0;} 
 
 // Init MSSP1 in SPI mode and I/O pins 
 #define    SPI1_Init()            {INIT_SPI1_IO(); SSP1CON1 = SPI1_CONFIG; SSP1STATbits.CKE=1; PIR1bits.SSP1IF=0;} 


/* TODO Application specific user parameters used in user.c may go here */

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
