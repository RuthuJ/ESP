/*Question: Get a four-digit number from user. If the sum of the ten’s digit and 
hundred’s digit is equal to 10, and one of the digits is more than 7 then 
print “Success”, otherwise print “Failure”.
Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.*/

#include<stdio.h>
int main()
{
    int x,tens,hundred,sum;
    printf("enter num");
    scanf("%d",&x);
    tens = ((x/10)%10);
    hundred=((x/100)%10);
    sum= tens+hundred;
    if (sum == 10 && (tens > 7 || hundred > 7))
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
}