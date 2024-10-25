/*Question:  Write a program to print the total count of numbers which are less than 
100000 and whose sum of digits is 14. */

#include<stdio.h>
int main()
{
    int num=0, count=0, sum, temp, digit;
    while(num<100000)
    {
        sum=0;
        temp=num;
        while(temp>0)
        {
            digit=temp%10;
            sum+=digit;
            temp/=10;
        }
        if(sum==14)
        {
            count++;
        }
        num++;
    }
    printf("%d",count);
}