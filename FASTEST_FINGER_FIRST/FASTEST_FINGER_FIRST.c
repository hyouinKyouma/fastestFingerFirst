/*
 * FASTEST_FINGER_FIRST.c
 *
 * Created: 2/2/2018 12:07:13 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/lcdheader.h>
#include <atmega/button.h>

unsigned char seg[10]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xf6};
	
int main(void)
{
	DDRA=0x00;
	PORTA=0xff;
	DDRB=DDRC=DDRD=0xff;
	lcmd(0X38);
	lcmd(0X0C);
	
    while(1)
    {
		if (bta1)
		{
			lcmd(0x01);
			PORTD=seg[1];
			PC3ON;
			PC4OFF;	
			PC5OFF;
			PC6OFF;
			PC7OFF;	
			str("1.PLAYER 1");
		}
		else if (bta2)
		{
			lcmd(0x01);
	
			PORTD=seg[2];
			PC3OFF;
			PC4ON;
			PC5OFF;
			PC6OFF;
			PC7OFF;
			str("2.PLAYER 2");
		}
		else if (bta3)
		{
			lcmd(0x01);
			PORTD=seg[3];
			PC3OFF;
			PC4OFF;
			PC5ON;
			PC6OFF;
			PC7OFF;
			str("3.PLAYER 3");
		}
		else if (bta4)
		{
			lcmd(0x01);
			PORTD=seg[4];
			PC3OFF;
			PC4OFF;
			PC5OFF;
			PC6ON;
			PC7OFF;
			
		}
		else if (bta5)
		{	
			lcmd(0x01);
			PORTD=seg[5];
			PC3OFF;
			PC4OFF;
			PC5OFF;
			PC6OFF;
			PC7ON;
			str("5.PLAYER 5");
			
		}
		else
		{
			lcmd(0x01);
			PORTB=PORTC=PORTD=0x00;
		}
		
		
        //TODO:: Please write your application code 
    }
}