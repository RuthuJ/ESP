/*Question: Write a program to get a number from user print the total number of 
digits in that number
Answer: Input : 123456 - Output – 6
Input : 76895439- Output – 8
Input : 675 – Output - 3*/

#include<stdio.h>
int main()
{
    int x;
    int count =0;
    printf("enter num:");
    scanf("%d",&x);
    loop: if(x!=0)
    {
        x/=10;
        count++;
        goto loop;
    }
    printf("%d",count);

}