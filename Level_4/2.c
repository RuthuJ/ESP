/*reverse a given number*/

#include<stdio.h>
int reverse(int n);
int main()
{
    int num,result;
    printf("enter the number to be reversed");
    scanf("%d",&num);
    result=reverse(num);
    printf("the reverse of the given number is=%d",result);
    return 0;
}
int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        int last_digit=n%10;
        rev=rev*10+last_digit;
        n/=10;
    }
    return rev;

}