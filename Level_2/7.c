/*Question: Write a loop program to print the two-digit odd numbers, who’s sum of
digits are 7.
Answer: 25
43
61*/

#include<stdio.h>
int main()
{
    int x=10;
    int sum;
    loop: if(x<100)
    {
        if((x%2)!=0)
        {
        sum=((x%10)+(x/10));
        if (sum==7)
        printf("%d\n",x);
        }
        x++;
        goto loop;
    }
}