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
void buffer1_write();
void reset_counter();
void buffer1_read();

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

    reset_counter();
    buffer1_write();
    int i = 0;
    while(1)
    {
        PORTA_shadow = PORTA_shadow ^ 1;
        PORTA = PORTA_shadow;
        delay(1000);
        PORTA_shadow = PORTA_shadow ^ 1;
        PORTA = PORTA_shadow;
        delay(1000);
        printf("hi\n");
//        
//        delay(10000);
//        PORTB = PORTB & ~0x10;
//        delay(10000);
//        
//        PORTA = i;
//        //buffer1_write();
        i++;
        if (i == 1000) {
            reset_counter();
            buffer1_read();
        }
        if (i == 2000) {
            reset_counter();
            buffer1_write();
            i = 0;
        }
    }

}

void delay(int s) {
    int a = 0;
    int i;
    for (i = 0; i < s; i++) {
        a++;
    }
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
