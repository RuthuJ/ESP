/*Question:  Write a program to print the sum of all TWO digit odd numbers 
Answer :  2475 */

#include<stdio.h>
int sum_of_odd_digits(int n);
int main()
{
    int n,result;
    result=sum_of_odd_digits(n);
    printf("the sum of two digits odd number is %d",result);
    return 0;
}
int sum_of_odd_digits(int n)
{
    int sum=0;
    for(int i=10;i<100;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    return sum;
}