/*Question:  Write a program get number from user print the total number of single
digit prime numbers in the number. 
Answer:  
Input: 163496481   - Output: 1 
Input: 364925   - Output: 3 */

#include<stdio.h>
int main()
{
    int num,count=0,flag=0,temp,i;
    printf("enter num:");
    scanf("%d",&num);
    while(num>0)
    {
        temp= num%10;
        flag=0;
        if(temp<2)
        {
            flag=1;
        }
        else
        {
            for(i=2;i*i<=temp;i++)
            {
                if (temp%i==0)
                {
                    flag=1;
                    break;
                }
            }

        }
        
        if (flag==0)
        {
            count++;
        }
        num/=10;
    }
    printf("the total of single digit prime number is%d",count);
}