#include <msp430.h> 

float b = 3.0;

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;

    unsigned char c = 0x0032;
    unsigned char d = 0x05;

    unsigned char AND;
    unsigned char OR;

    int a = 3;

    a+=1;

    b-=1;

    OR = c||d;

    AND = c&&d;

    while(1);

    return 0;
}
