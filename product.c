/* program to find sum and product of all digits of a number.*/
 
#include <stdio.h>
 

/*  function:   proDigits
    to calculate product of all digits.
*/
 
int proDigits(int num)
{
    int pro=1,rem;
    while(num > 0)
    {
        rem=num%10;
        pro*=rem;
        num=num/10;
    }
 
    return pro;
 
}
int main()
{
    int n;
    printf("\nEnter an integer number :");
    scanf("%d",&n);
 

    printf("\nPRODUCT of all digits: %d",proDigits(n));
    return 0;
}
