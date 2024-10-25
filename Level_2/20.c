/*Question:  Write a program print total number of single digit Prime numbers 
Answer:  
4  */

#include <stdio.h>
int main()
{
    int num=2,i,flag=0, count=0;
    while (num<=9)
    {
        flag=0;
        for (i=2;i*i<=num;i++)
        if (num%i==0)
        {
            flag+=1;
            break;
        }
        if (flag==0)
        {
            count++;
        }
        num++;
    }
    printf("Total number of single digit prime number is %d",count);

}