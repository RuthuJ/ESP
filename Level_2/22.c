/*Question:  Write a program get number from user print the total number of two-digit 
odd numbers in the number. 
Answer:  
Input: 12345678   - Output: 3 
Input: 987531   - Output: 4 */

#include <stdio.h>
int main()
{
    int num,count=0,i=1,temp;
    printf("enter num:");
    scanf("%d",&num);
    while(num>10)
    {
        temp=num%10;
        if(temp%2!=0)

        {
            count++;
        }
        num/=10;
    }
    printf("total number of odd numbers in digit is %d",count);


}