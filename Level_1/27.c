/*Question: Get a two-digit number from user. If the sum of the digits is 10 then print 
“Success”, otherwise print “Failure”.
Example: Input: 56 - Output Failure. Input: 37 - Output: Success.*/

#include<stdio.h>
int main()
{
    int x,sum;
    printf("enter num");
    scanf("%d",&x);
    sum = (x/10)+(x%10);
    if (sum==10)
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
}