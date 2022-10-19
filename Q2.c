#include <msp430.h> 

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;

    const signed int A = 0b0100000000000001;
    const signed int B = 0b0111111111111111;

    int result = sum(A,B);

    while(1);
    return 0;
}

int sum (int x, int y){
    return (x+y);
}
