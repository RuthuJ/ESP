/*Question:  Write a program get number from user print whether that number is 
prime or not. 
Answer:  
Input : 31   -  Output : Prime 
Input : 27   - Output  : Not Prime. */

#include<stdio.h>
int main()
{
    int i, num, flag=0;
    printf("enter num:");
    scanf("%d",&num);
    if (num<2)
    {
        printf("%d is not prime",num);
        return 0;
    }
    for(i=2;i*i<num;i++)
    {
        if (num%i==0)
        {
            flag+=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime", num);
    }
}