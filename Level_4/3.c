/*Write a  program to print the total number of TWO digit odd numbers. */

#include<stdio.h>
int odd(int n);
int main()
{
    int n,result;
    result= odd(n);
    printf(" total number of two digit odd number are=%d",result);
    return 0;
}

int odd(int n)
{
    int i,count=0;
    for(i=10;i<100;i++)
    {
        if(i%2!=0)
        {
            count++;
        }
    }
    return count;
}