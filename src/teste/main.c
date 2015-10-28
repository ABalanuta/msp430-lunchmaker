#include <msp430.h>
volatile unsigned int i; 
int main(void)
{
WDTCTL = WDTPW + WDTHOLD; 
P1DIR |= 0x01; 
for (;;)
{
P1OUT ^= 0x01; 
i = 50000; 
do (i--);
while (i != 0);
}
}

