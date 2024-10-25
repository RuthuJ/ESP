/*Question: Write a program to get a number from user and print the sum of all 
digits.
Answer: Input: 123456 - Output – 21
Input: 76895439 - Output – 51
Input: 675 – Output - 18*/

#include<stdio.h>
int main()
{
    int x,y;
    int sum =0;
    printf("enter num:");
    scanf("%d",&x);
    loop: if (x!=0)
    {
        y=x%10;
        sum+=y;
        x/=10;
        goto loop;
    }
    printf("%d",sum);
}