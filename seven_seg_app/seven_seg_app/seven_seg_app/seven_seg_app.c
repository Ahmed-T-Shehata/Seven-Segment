/*
 * seven_seg_app.c
 *
 * Created: 11/18/2022 12:58:23 PM
 *  Author: safifi
 */ 


#include "Seven_Seg.h"

int main(void)
{
	uint8_t x = 0;
	seven_seg_init();
    while(1)
    {
		for(uint8_t i = 0; i < 125; i++){
			seven_seg_write(x/10, 1);
			seven_seg_write(x%10, 2);
			
		}		
		x++;
        //TODO:: Please write your application code 
    }
}