/////////////////////////////////////////////////////////////////////////////////
//
// NUCLEO_144.cpp
// 8/10/2019
// Christopher Williams
//
/////////////////////////////////////////////////////////////////////////////////
#ifndef NUCLEO_144_CPP
#define NUCLEO_144_CPP

// Nucleo 144 Board Support Package

// I N C L U D E S //////////////////////////////////////////////////////////////
#include <jsapi.h>
#include <NUCLEO_144.h>

// p i n M o d e ( ) /////////////////////////////////////////////////////////////
void pinMode(const int pin, int mode){
    switch(digital_pin_to_port[pin]){
    case PA:
        if(mode==OUTPUT)
            porta.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            porta.MakeInput(digital_pin[pin]);
        break;
    case PB:
        if(mode==OUTPUT)
            portb.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            portb.MakeInput(digital_pin[pin]);
        break;
    case PC:
        if(mode==OUTPUT)
            portc.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            portc.MakeInput(digital_pin[pin]);
        break;
    case PD:
        if(mode==OUTPUT)
            portd.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            portd.MakeInput(digital_pin[pin]);
        break;
    case PE:
        if(mode==OUTPUT)
            porte.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            porte.MakeInput(digital_pin[pin]);
        break;
    case PF:
        if(mode==OUTPUT)
            portf.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            portf.MakeInput(digital_pin[pin]);
        break;
    case PG:
        if(mode==OUTPUT)
            portg.MakeOutput(digital_pin[pin],OSPEED_LOW);
        else
            portg.MakeInput(digital_pin[pin]);
        break;
    default:
        break;
    }//End of switch
}// End of pinMode()

// d i g i t a l W r i t e ( ) //////////////////////////////////////////////////////////
void digitalWrite(const int pin, int state){
    switch(digital_pin_to_port[pin]){
    case PA:
        if(state==HIGH)
            porta.Set(digital_pin[pin]);
        else
            porta.Clear(digital_pin[pin]);
        break;
    case PB:
        if(state==HIGH)
            portb.Set(digital_pin[pin]);
        else
            portb.Clear(digital_pin[pin]);
        break;
    case PC:
        if(state==HIGH)
            portc.Set(digital_pin[pin]);
        else
            portc.Clear(digital_pin[pin]);
        break;
    case PD:
        if(state==HIGH)
            portd.Set(digital_pin[pin]);
        else
            portd.Clear(digital_pin[pin]);
        break;
    case PE:
        if(state==HIGH)
            porte.Set(digital_pin[pin]);
        else
            porte.Clear(digital_pin[pin]);
        break;
    case PF:
        if(state==HIGH)
            portf.Set(digital_pin[pin]);
        else
            portf.Clear(digital_pin[pin]);
        break;
    case PG:
        if(state==HIGH)
            portg.Set(digital_pin[pin]);
        else
            portg.Clear(digital_pin[pin]);
        break;
    default:
        break;
    }//End of switch
}// End of digitalWrite()

// d i g i t a l R e a d( ) ////////////////////////////////////////////////////////
int digitalRead(const int pin){
    switch(digital_pin_to_port[pin]){
        case PA:
            if(porta.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        case PB:
            if(portb.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        case PC:
            if(portc.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        case PD:
            if(portd.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        case PE:
            if(porte.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        case PF:
            if(portf.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        case PG:
            if(portg.Read(digital_pin[pin])==1)
                return HIGH;
            else
                return LOW;
            break;
        default:
            return -1;
            break;
    }//End of switch()
}// End of digitalRead()

// Get_Port_String()
const char* Get_Port_String(int port){
    switch(port){
        case(PA):
            return "port A";
            break;
        case(PB):
            return "port B";
            break;
        case(PC):
            return "port C";
            break;
        case(PD):
            return "port D";
            break;
        case(PE):
            return "port E";
            break;
        case(PF):
            return "port F";
            break;
        case(PG):
            return "port G";
            break;
        default:
            return "NULL";
            break;
    }//End of switch
}//End of Get_Port()

// I d e n t i f y P o r t ( ) /////////////////////////////////////////////////////////////
void IdentifyPort(const int pin){
    printf("\r\nPin %d ",pin);
    printf("is in %s",Get_Port_String(digital_pin_to_port[pin]));
    printf("%d ",digital_pin[pin]);
}//IdentifyPort()


#endif
