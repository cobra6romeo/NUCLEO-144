/////////////////////////////////////////////////////////////////////////////////
//
// NUCLEO_144.h
// 8/10/2019
// Christopher Williams
//
/////////////////////////////////////////////////////////////////////////////////
#ifndef NUCLEO_144_H
#define NUCLEO_144_H

// Nucleo 144 Board Support Package

// D E F I N E S /////////////////////////////////////////////////////////////////
// I / O    P O R T    N A M E S
#define PA  0
#define PB  1
#define PC  2
#define PD  3
#define PE  4
#define PF  5
#define PG  6

// I / O    P I N   N A M E S
#define D0  0
#define D1  1
#define D2  2
#define D3  3
#define D4  4
#define D5  5
#define D6  6
#define D7  7
#define D8  8
#define D9  9
#define D10 10
#define D11 11
#define D12 12
#define D13 13
#define D14 14
#define D15 15
#define D16 16
#define D17 17
#define D18 18
#define D19 19
#define D20 20
#define D21 21
#define D22 22
#define D23 23
#define D24 24
#define D25 25
#define D26 26
#define D27 27
#define D28 28
#define D29 29
#define D30 30
#define D31 31
#define D32 32
#define D33 33
#define D34 34
#define D35 35
#define D36 36
#define D37 37
#define D38 38
#define D39 39
#define D40 40
#define D41 41
#define D42 42
#define D43 43
#define D44 44
#define D45 45
#define D46 46
#define D47 47
#define D48 48
#define D49 49
#define D50 50
#define D51 51
#define D52 52
#define D53 53
#define D54 54
#define D55 55
#define D56 56
#define D57 57
#define D58 58
#define D59 59
#define D60 60
#define D61 61
#define D62 62
#define D63 63
#define D64 64
#define D65 65
#define D66 66
#define D67 67
#define D68 68
#define D69 69
#define D70 70
#define D71 71
#define LED1 72
#define LED2 73
#define LED3 74

#define OUTPUT 0
#define INPUT  1
#define HIGH 1
#define LOW 0

#define SS_PIN     D8
#define MOSI_PIN   D22
#define MISO_PIN   D25
#define SCK_PIN    D23

#define SDA_PIN
#define SCL_PIN



// P O R T    L O O K    U P    T A B L E /////////////////////////
const uint8_t digital_pin_to_port[] = {
    PG, PG, PF, PE, PF, PE, PE, PF, PF, PD, PD, PA, PA, PA, PB, PB,
    PC, PB, PB, PB, PA, PC, PB, PB, PA, PB, PB, PB, PD, PD, PD, PE,
    PA, PB, PE, PB, PB, PE, PE, PE, PE, PE, PE, PC, PC, PC, PC, PC,
    PD, PG, PG, PD, PD, PD, PD, PD, PE, PE, PE, PE, PE, PF, PF, PF,
    PG, PG, PD, PD, PF, PF, PF, PA, PB, PB, PB};

// P I N    L O O K    U P    T A B L E ////////////////////////////
const uint8_t digital_pin[] = {
    9, 14, 15, 13, 14, 11, 9, 13, 12, 15, 14, 7, 6, 5, 9, 8,
    6, 15, 13, 12, 15, 7, 5, 3, 4, 4, 6, 2, 13, 12, 11, 2,
    0, 0, 0, 11, 10, 15, 14, 12, 10, 7, 8, 8, 9, 10, 11, 12,
    2, 2, 3, 7, 6, 5, 4, 3, 2, 4, 5, 6, 3, 8, 7, 9, 1,
    0, 1, 0, 0, 1, 2, 7, 0, 7, 14 };

// P R O T O T Y P E S /////////////////////////////////////////////////////
void pinMode(const int pin, int mode);
const char* Get_Port_String(int port);
void IdentifyPort(const int pin);
void digitalWrite(const int pin, int state);
int digitalRead(const int pin);
void SPI_SetPins(const int sck_pin,const int mosi_pin, const int miso_pin, const int cs_pin);
#endif // NUCLEO_144_H
