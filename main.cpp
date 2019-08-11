/////////////////////////////////////////////////////////////////
//
// NUCLEO-144 STM32 board
// Written by Christopher Williams
// 8/10/2019
//
// Cortex-M4 main file
//
//////////////////////////////////////////////////////////////////

// I N C L U D E S ///////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <NUCLEO_144.h>

#include <jsapi.h>


// S E T U P //////////////////////////////////////////////////////
void setup( void){
    // Set System Clock
    // HSI is 16 MHz
    // PLL is configured to 216MHz
    jsapi_clock.SetSystemClock(16,0,false,216,7);
    // Setup 1 milli-Second System Timer
    jsapi_cortex_core.SysTick_Timer ( SYSTICK_MILLISECOND);
    // Setup UART
    usart3.SetPins(&portd, 8, 7, &portd, 9, 7);
    usart3.MakeUSART(9600, 8, 1, FC_NONE);
    JSAPI_RetargetConsole(&usart3);
    printf("\r\nImageCraft STM32F746ZG MCU Running at %dMHz\r\n",jsapi_clock.GetSysClkFreq() / 1000000);
    // Setup LEDS

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);

    pinMode(D7, INPUT);
    DelayMilliSecs(100);
    pinMode(D6, OUTPUT);
    digitalWrite(D6, HIGH);
}//End of setup()



// M A I N ( ) /////////////////////////////////////////////////////////
int main(){

    setup();
    while(1){

        if(digitalRead(D7)==HIGH)
            printf("\r\n HIGH \r\n");
        else
            printf("\r\n LOW \r\n");
        DelaySeconds(2);
        digitalWrite(D6, LOW);

        digitalWrite(LED1, HIGH);
        digitalWrite(LED3, LOW);
        DelayMilliSecs(100);
        digitalWrite(LED2, HIGH);
        DelayMilliSecs(100);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED1, LOW);
        DelayMilliSecs(100);
        digitalWrite(LED2, LOW);
        DelayMilliSecs(100);

    }//End of while

}//End of main()
