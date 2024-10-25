/*Question:  Write a program to get a number from user, print whether that number is 
prime, and sum of digit is equal to 14. 
Answer:  
Input: 59   - Output: Prime & Sum of Digits is 14 
Input: 77   - Output: Not Prime but sum of digits is 14 
Input: 13 - Output: Prime, but sum of Digits is not 14*/

#include<stdio.h>
int main()
{
    int num,i,sum=0,flag=0;
    printf("enter two digit num:");
    scanf("%d",&num);
    if(num<2)
    {
        printf("%d is not prime",num);
        return 0;
    }
    sum=((num%10)+(num/10));
    for(i=2;i*i<=num;i++)
    {
        
        if(num%i==0)
        {
            flag+=1;
            break;
        }
    }
    if ((flag==0) && (sum==14))
    {
        printf("%d is prime and sum of digits is equal to 14",num,sum);
    }
    else if ((flag ==0)&&(sum!=14))
    {
        printf("%d is prime and sum of digits is not equal to 14(sum is %d)",num,sum);  
    }
    else if ((flag==1)&&(sum==14))
    {
        printf("%d is not prime and sum of digits is equal to 14",num,sum);
    }
    else
    {
        printf("%d is not prime and the sum of digits are not equal to 14 (sum is %d)", num,sum);
    }
}