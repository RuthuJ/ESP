/*Prog to print total number of single digit odd num*/

#include<stdio.h>
int odd(int n);
int main()
{
    int n,result;
    result= odd(n);
    printf(" total number of single digit odd number are=%d",result);
    return 0;
}

int odd(int n)
{
    int i,count=0;
    for(i=0;i<10;i++)
    {
        if(i%2!=0)
        {
            count++;
        }
    }
    return count;
}