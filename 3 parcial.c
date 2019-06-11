#include <include/18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=40000000)
//#include <stdio.h>
//#include <stdlib.h>
#define __DEBUG_SERIAL__ //Si comentas esta linea se deshabilita el debug por serial y el PIN_C6 puede ser usado en forma digital I/O

#ifdef __DEBUG_SERIAL__
   #define TX_232        PIN_C6
   #use RS232(BAUD=9600, XMIT=TX_232, BITS=8,PARITY=N, STOP=1)
   #use fast_io(c)
#endif
int main(int argc, char argv){
    printf("Hola mundo!\n");
    TRISB = 0;
    int i;
    
    while(1)
    {
        PORTB=0X00;
        for(i=0; i<100;i++){
        }
        PORTB=0X00;
        for(i=0; i<100;i++){
    }
}
    return(EXIT_SUCCESS);
}