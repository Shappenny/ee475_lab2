/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/

/* TODO Application specific user parameters used in user.c may go here */

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/

/* TODO User level functions prototypes (i.e. InitApp) go here */

void InitApp(void);         /* I/O and Peripheral Initialization */
void CollectData(void *TaskDataPtr);
void WriteSram(void *TaskDataPtr);
void ReadSram(void *TaskDataPtr);
void SpiComms(void *TaskDataPtr);

/* TODO Define TCB data structs here */
//  Declare a TCB structure
typedef struct 
{
	void (*taskPtr)(void);
}
TCB;

typedef struct WriteSramDataStruct
{
	uint8_t sramChip;		/* 0 to 2 */
	uint16_t startAddr;
	uintptr_t dataPtr;
} WriteSramDataStruct;

typedef struct ReadSramDataStruct
{
	uint8_t sramChip;		/* 0 to 2 */
	uint16_t startAddr;
	uintptr_t dataPtr;
} ReadSramDataStruct;

typedef struct SpiCommsDataStruct
{
	uint8_t sramChip;		/* 0 to 2 */
	uint16_t writeData;
	uint16_t readData;
	uintptr_t dataPtr;
} WriteSramDataStruct;
