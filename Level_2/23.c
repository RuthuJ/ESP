/*Question:  Write a program get number from user print the total number of single
digit perfect square numbers in the number. 
Answer:  
Input: 123456789   - Output: 3 
Input: 987531   - Output: 2 */

#include <stdio.h>
int main()
{
    int num,count=0,i=1,temp;
    printf("enter num:");
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        for(i=1;i<4;i++)
        if(i*i==temp)
        {
            count++;
            break;
        }
        num/=10;
    }
    printf("total number of single digit square numbers is %d",count);


}

