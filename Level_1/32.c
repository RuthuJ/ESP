/*Question: Get a three-digit number from user. If the sum of the digits is less than 10, then print
the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, 
then print the sum, otherwise add the digits of the sum, and print the sum.
Note: The result should be always single digit only.
Example: Input: 123 – Output: 6
Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)*/

#include<stdio.h>
int main()
{
    int x,sum;
    printf("enter num:");
    scanf("%d",&x);
    sum=(x%10)+((x/10)%10)+(x/100);
    if (sum > 10)
    {
        sum = (sum % 10) + (sum / 10);
    }
    if (sum > 10)
    {
        sum = (sum % 10) + (sum / 10); 
    }
    printf("Result = %d\n", sum);
}