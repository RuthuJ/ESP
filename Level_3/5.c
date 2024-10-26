/*Question:  Get a number from user and count the number of zeros in that number 
and print. Write your code inside the function. Do not Change the 
format. 
Example:  
Input: 100 Output: 2 . Input: 1060030 Output: 4. */

#include<stdio.h>
int count0(int n);
int main()
{
    int n,result;
    printf("enter num");
    scanf("%d",&n);
    result=count0(n);
    printf("no. of zeros is %d",result);
    return 0;

}
int count0(int n)
{
    int count=0,temp;
    while(n>0)
    {
        temp=n%10;
        if(temp==0)
        count++;
        n/=10;
    }
    return count; 
}