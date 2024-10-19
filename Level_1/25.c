/*Question: Get a three-digit number from user and subtract 5 from that number if 
one’s digit number and 100’s digit number are same, then print the 
result. Do not use “if”.
Example: Input: 595 Output 590. Input: 372 Output: 372*/

#include<stdio.h>
int main()
{
    int x,ones, hundred, result,y;
    printf("enter num:");
    scanf("%d",&x);
    ones= x%10;
    hundred= x/100;
    y = (ones==hundred);
    result = x-(y*5);
    printf("result=%d", result);
}
