/*Question:  Get a number from user and add 2 to that number and print the result. 
Write your code inside the function. Do not Change the Code. 
Example:  
Input :45 Output 47. Input:56789 Output:56791*/

#include<stdio.h>
int fun(int n);
int main()
{
    int n1,n2;
    printf("enter the numbers:");
    scanf("%d",&n1);
    n2=fun(n1);
    printf("%d",n2);
    return 0;
}
int fun(int num1)
{
    int num2;
    num2= num1+2;
    return num2;
}
