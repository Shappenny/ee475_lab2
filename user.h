/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/

#define SPI_SCK		LATCbits.LATC3		/* Clock pin, PORTC pin 3 */
#define SPI_SO		LATCbits.LATC5		/* Serial output pin, PORTC pin 5 */
#define SPI_SI		PORTCbits.RC4		/* Serial input pin, PORTC pin 4 */
#define SPI_CSN		LATCbits.LATC2		/* CSN output pin, PORTC pin 2 */
#define SPI_CE		LATCbits.LATC1		/* CE output pin, PORTC pin 1 */
#define SPI_IRQ		PORTBbits.RB0		/* IRQ input pin, PORTB pin 0 */
#define SPI_SCALE	4					/* postscaling of signal */
#define nop() 		_asm nop _endasm	/* no-op */
#define SYNC_SEQ	0x2C8				/* SPI synchronize sequence sent before data */

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
	void (*taskPtr)(void *);
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
	uintptr_t writeData;	/* ptr to write_data */
	uintptr_t readData;		/* ptr to read_data */
} SpiCommsData;
