/*Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Example: Input: 56 78 – Output: 15
Input: 14 65 - Output: 11*/

#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("enter the two, two digit numbers:");
    scanf("%d %d",&x,&y);
    if(x>y){
        sum =((x%10)+(x/10));
        printf("result= sum %d", sum);
    }
    else{
        sum=((y%10)+(y/10));
        printf("result= sum %d", sum);
    }
}