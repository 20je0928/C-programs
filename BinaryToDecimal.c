//Converting Binary To Decimal in C
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    char binaryNumber[100];
    printf("Enter A Binary Number :");
    gets(binaryNumber);
    int bin, dec = 0;
     
    bin = atoi(binaryNumber);
 
    for(int i = 0; bin; i++, bin /= 10)
        if (bin % 10)
            dec += pow(2, i);
 
    printf("%d", dec);
 
    return 0;
}
 
