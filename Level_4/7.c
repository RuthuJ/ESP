/*Question:  Write a program to print the sum of all single digit odd numbers 
Answer :  25*/

#include<stdio.h>
int sum_of_odd_digits(int n);
int main()
{
    int n,result;
    result=sum_of_odd_digits(n);
    printf("the sum of single digits odd number is %d",result);
    return 0;
}
int sum_of_odd_digits(int n)
{
    int sum=0;
    for(int i=0;i<10;i++)
    {
        if(i%2!=0)
        {
            int temp=i;
            while(temp!=0)

            {
                int last_digit=temp%10;
                sum+=last_digit;
                temp/=10;
            }
        }
    }
    return sum;
}