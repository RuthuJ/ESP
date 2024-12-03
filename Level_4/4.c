/*Question:  write a program to print the total number of THREE digit odd numbers 
Answer : 450 */

#include<stdio.h>
int odd(int n);
int main()
{
    int n,result;
    result= odd(n);
    printf(" total number of three digit odd number are=%d",result);
    return 0;
}

int odd(int n)
{
    int i,count=0;
    for(i=100;i<1000;i++)
    {
        if(i%2!=0)
        {
            count++;
        }
    }
    return count;
}