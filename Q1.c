#include <msp430.h> 

float b = 3.0;

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;

    unsigned char c = 0x0032;
    unsigned char d = 0x05;

    unsigned char AND;
    unsigned char OR;

    int a = 8;

    a+=1;

    b-=1;

    AND = c&&d;

    OR = c||d;

    while(1);

    return 0;
}
