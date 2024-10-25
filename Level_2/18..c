/*Question:  Write a program to get number from user, print whether that number’s 
first two digits (ten’s digits and one’s digit) is prime. 
Answer:  
Input: 359   - Output: Prime 
Input: 3577   - Output: Not Prime */

#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter num:");
    scanf("%d",&num);
    int first_two_digits = num%100;
    if(num<2)
    {
        printf("%d is not prime",first_two_digits);
        return 0;
    }
    for(i=2;i*i<=first_two_digits;i++)
    {
        if (first_two_digits%i==0)
        {
            flag+=1;
            break;
        }
    }
        if (flag==0)
        {
            printf("num is prime",first_two_digits);
        }
        else
        {
            printf("num is not prime",first_two_digits);
        }
    


}