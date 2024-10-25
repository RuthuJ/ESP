/*Question:  Write a program get number from user print the total number of two-digit 
perfect square numbers in the number. 
Answer:  
Input: 163496481   - Output: 4 
Input: 364925   - Output: 4 */

#include <stdio.h>
int main()
{
    int num,count=0,i=1,temp;
    printf("enter num:");
    scanf("%d",&num);
    while(num>10)
    {
        temp=num%100;
        for(i=1;i<=99;i++)
        if(i*i==temp)
        {
            count++;
            break;
        }
        num/=10;
    }
    printf("total number of two-digit square numbers is %d",count);


}

