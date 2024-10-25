/*Question: Write a loop program to print the sum of two-digit odd numbers, whose
ten’s digit is 7.
Answer: 375*/

#include<stdio.h>
int main()
{
    int x=10;
    int sum=0;
    int ones,tens;
    loop: if(x<100)
    {
        ones=(x%10);
        tens=(x/10);
        if (((x%2)!=0)&&(tens==7))
        {
            sum+=x;
        }
        x++;
        goto loop;
    }
    printf("%d\n",sum);
}