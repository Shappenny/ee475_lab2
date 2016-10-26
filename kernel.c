#include <stdio.h>

#define KBINT 0x3;						//  the kb will interrupt on interrupt 3

typedef enum aBool{FALSE, TRUE};		//  create a boolean value
typedef unsigned char boolean;			//  create a boolean type

//  Declare the globals

boolean prompted = FALSE;				//  user data requested
boolean dataAvail = FALSE;				//  user data available

int data;								//  declare a shared data

//  Declare the prototypes for the tasks

void prompt(void);						//  prompt task
void increment (void);					//  computation task
void display (void);					//  output task

//  Declare the prototypes for the ISR

void getDataISR (void);					//  get data ISR


//  Declare a TCB structure

typedef struct 
{
	void (*taskPtr)(void);
}
TCB;


void main(void)
{
	int i=0;							//  queue index


	TCB* queue[3];						//  declare queue as an array of pointers to TCBs

	//  Declare some TCBs 
	TCB promptTask;
	TCB compTask;
	TCB outTask;

	//  Declare a working TCB pointer
	TCB* aTCBPtr;

	//  Initialize the TCBs

	promptTask.taskPtr = prompt;

	compTask.taskPtr = increment;

	outTask.taskPtr = display;

   	// 	Initialize the task queue
	queue[0] = &promptTask;
	queue[1] = &compTask;
	queue[2] = &outTask;


	//  Enter the keyboard ISR into the interrupt vector table
	setVect(KBINT, getDataISR);

	//	Schedule and dispatch the tasks
	while(1)
	{
		aTCBPtr = queue[i];
		aTCBPtr->taskPtr();

		i = (i+1)%3;
	
	}

	return;

}

void prompt(void)						//  perform input operation
{
	if (!prompted)
	{
		printf ("Enter a number: 0..9 ");
		prompted = TRUE;
	}
	return;
}

void increment(void)					//  perform computation
{
	if (dataAvail)
	{
		data++;
	}
	return;
}

void display(void)						// perform output operation
{
	if (dataAvail)
	{
		printf ("The result is: %d\n", data);

		prompted = FALSE;
		dataAvail = FALSE;
	}
	return;
}

//  keyboard ISR

void getDataISR(void)					//  perform input operation
{
	data = getchar();
	getchar();							//  discard cr
	data -= '0';  						//  convert to decimal from ascii
	dataAvail = TRUE;
	return;
}