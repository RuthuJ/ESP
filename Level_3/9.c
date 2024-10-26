/*Question:  Get a two-digit number from user swap the digits. 
Example:  
Input: 34 Output: 43. Input: 56 Output: 65 */

#include<stdio.h>
int swap(int n);
int main()
{
    int n,result;
    printf("enter num");
    scanf("%d",&n);
    result=swap(n);
    printf("%d",result);
    return 0;
}
int swap(int n)
{
    int first,last,result;
    first=n/10;
    last=n%10;
    result=(last*10)+first;
    return result;
}