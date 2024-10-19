/*Question: Get a number from user and subtract 5 from that number if the number’s
ten’s position digit is odd, then print the result. Do not use “if”.
Example: Input: 685 Output 685. Input: 89172 Output: 89167*/

#include<stdio.h>
int main()
{
    int x,y,z,result;
    printf("enter num:");
    scanf("%d",&x);
    y=(x/10)%10;
    z=(y%2);
    result=x-(z*5);
    printf("result= %d", result);

}