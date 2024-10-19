/*Question: Get a three-digit number from user and print sum the digits.
Example: Input: 562 Output 13. Input: 469 Output: 19*/

#include<stdio.h>
int main(){
    int w,x,y,z,sum;
    printf("enter num:");
    scanf("%d",&x);
    y=x/100;
    w=x%10;
    z=(x/10)%10;
    sum=y+z+w;
    printf("sum= %d",sum);
}