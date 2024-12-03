/*Question:  Write a program to print the sum of all THREE digit odd numbers 
Answer : 247500 */

#include<stdio.h>
int sum_of_odd_digits(int n);
int main()
{
    int n,result;
    result=sum_of_odd_digits(n);
    printf("the sum of three digits odd number is %d",result);
    return 0;
}
int sum_of_odd_digits(int n)
{
    int sum=0;
    for(int i=100;i<1000;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    return sum;
}