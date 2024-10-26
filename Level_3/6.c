/*Question:  Get a number from user and reverse that number and print. Write your 
code inside the function. Do not Change the format. 
Example:  
Input: 123 Output: 321. Input: 56789 Output: 98765. */

#include<stdio.h>
int reverse(int n);
int main()
{
    int n, result;
    printf("enter num:");
    scanf("%d",&n);
    result=reverse(n);
    printf("%d",result);
    return 0;
}
int reverse(int n)
{
    int temp,result=0;
    while(n>0)
    {
        temp=n%10;
        result=result*10+temp;
        n/=10;
    }
    return result;
}