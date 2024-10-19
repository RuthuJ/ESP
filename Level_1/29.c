/*Question: Get a three-digit number from user. If the sum of the one’s digit and 
hundred’s digit is less than 10, then print “Success”, otherwise print 
“Failure”.
Example: Input: 569 - Output Failure. Input: 316 - Output: Success*/

#include<stdio.h>
int main()
{
    int x,sum;
    printf("enter num");
    scanf("%d",&x);
    sum = (x%10)+(x/100);
    if (sum<10)
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
}