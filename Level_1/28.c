/*Question: Get a three-digit number from user. If the sum of the digits is 10 then 
print “Success”, otherwise print “Failure”.
Example: Input: 956 - Output Failure. Input: 127 - Output: Success.*/

#include<stdio.h>
int main()
{
    int x,sum;
    printf("enter num");
    scanf("%d",&x);
    sum = (x%10)+((x/10)%10)+(x/100);
    if (sum==10)
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
}