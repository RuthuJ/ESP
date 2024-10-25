/*Question:  Write a program to get a 4-digit number from user, print whether that 
number’s middle two digits (hundred’s digit and ten’s digit) is prime. 
Answer:  
Input: 6359   - Output: Not Prime 
Input: 3517   - Output: Prime */

#include<stdio.h>
int main()
{
    int num, i,middle,flag=0;
    printf("enter four digit num:");
    scanf("%d",&num);
    middle =(num%1000)/10;
    if (middle<2)
    {
        printf("%d is not prime",middle);
        return 0;
    }
    for(i=2;i*i<=middle;i++)
    {
        if(middle%i==0)
        {
            flag+=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("%d is prime",middle);
    }
    else
    {
        printf("%d is not prime",middle);
    }
}