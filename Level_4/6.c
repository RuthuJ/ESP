/*C Program to prinnt sum of digits*/

#include<stdio.h>
int sum_of_digits(int n);
int main()
{
    int n,result;
    printf("enter num:");
    scanf("%d",&n);
    result=sum_of_digits(n);
    printf("the sum of digits is %d",result);
    return 0;
}
int sum_of_digits(int n)
{
    int sum=0;
    while(n!=0)
    {
        int last_digit=n%10;
        sum+=last_digit;
        n/=10;
    }
    return sum;
}