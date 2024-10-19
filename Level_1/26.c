/*Question: Get a four-digit number from user and subtract 5 from that number if 
ten’s digit position and 100’s digit position is same, then print the result.
Do not use “if”.
Example: Input: 7595 Output 7595. Input: 3772 Output: 3767*/

#include<stdio.h>
int main()
{
    int x, tens, hundred, y, result;
    printf("enter num:");
    scanf("%d", &x);
    tens = (x/10)%10;
    hundred= (x/100)%10;
    y=(tens==hundred);
    result = x-(y*5);
    printf("result=%d", result);
}