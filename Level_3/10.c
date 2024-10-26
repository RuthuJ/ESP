/*Question:  Get a number from user, find the number of digits and print the same. 
Example:  
Input: 34678 Output: 5. Input: 12345678 Output: 8 */

#include<stdio.h>
int count_digits(int n);
int main()
{
    int n, result;
    printf("enter num");
    scanf("%d",&n);
    result=count_digits(n);
    printf("%d",result);
    return 0;
}
int count_digits(int n)
{
    int temp,count=0;
    while(n>0)
    {
        temp=n%10;
        count++;
        n/=10;
    }
    return count;
}