/*Question: Get a four-digit number from user. If the sum of the ten’s digit and 
hundred’s digit is greater than 10, then print “Success”, otherwise print 
“Failure”.
Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.*/

#include<stdio.h>
int main()
{
    int x,sum;
    printf("enter num");
    scanf("%d",&x);
    sum = ((x/10)%10)+((x/100)%10);
    if (sum>10)
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
}