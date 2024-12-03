/*Question:  Program to Print the sum of all THREE digit Prime numbers 
Answer : 75067*/

#include<stdio.h>
int single_prime_sum();
int main()
{
    int result;
    result=single_prime_sum();
    printf("sum of single digit prime num is:%d",result);
    return 0;
}
int single_prime_sum()
{
    int i,j,sum=0;
    for(i=100;i<=1000;i++)
    {
        int is_prime=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                is_prime=0;
                break;
            }
        }
    if(is_prime)
        sum+=i;
    }
return sum;
}