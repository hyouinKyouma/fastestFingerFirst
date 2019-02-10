/*
 * DC_MOTOR.c
 *
 * Created: 2/2/2018 1:12:50 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/button.h>
#include <atmega/dcmotor.h>

int main(void)
{
	DDRA=0x00;
	DDRD=0xff;
	PORTA=0xff;
	
    while(1)
    {
		if (bta1)
		{
			forward();
		}
		else if(bta2)
		{
			backward();
		}
		else if (bta3)
		{
			left();
		} 
		else if (bta4)
		{
			right();
		}
		else if (bta5)
		{
			sharp_left();
		}
		else if (bta6)
		{
			sharp_right();
		}
		else if (bta7)
		{
			stop();
		}
		
        //TODO:: Please write your application code 
    }
}