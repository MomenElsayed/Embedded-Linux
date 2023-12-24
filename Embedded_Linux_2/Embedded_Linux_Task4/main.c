#include <DIO.h>
#include <PORT.h>



int main()
{
    PORT_Init();
    while(1)
    {
        DIO_enumSetPort(DIO_enumPORTA,0xFF);
        DIO_DelayMs(1000);
        DIO_enumSetPin(DIO_enumPORTA,DIO_enumPin0,DIO_enumLogicLow);
        DIO_enumSetPin(DIO_enumPORTA,DIO_enumPin2,DIO_enumLogicLow);
        DIO_enumSetPin(DIO_enumPORTA,DIO_enumPin4,DIO_enumLogicLow);
        DIO_enumSetPin(DIO_enumPORTA,DIO_enumPin6,DIO_enumLogicLow);
        DIO_DelayMs(1000);
    }
    return 0;
}