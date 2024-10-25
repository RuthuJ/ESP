/*Question: Write a program to get a number from user and print the reverse of that 
number
Answer: Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576*/

#include<stdio.h>
int main()
{
    int x,y,rev;
    printf("enter num");
    scanf("%d",&x);
   loop: if(x!=0)
    {
        y=x%10;
        rev=(rev*10)+y;
        x/=10;
        goto loop;
    }
    printf("%d",rev);
}