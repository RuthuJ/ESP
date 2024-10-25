/*Question: Write a loop program to print the two-digit even numbers, who’s sum of
digits are 6.
Answer: 24
42
60*/

#include<stdio.h>
int main()
{
    int x=10;
    int sum;
    loop: if(x<100)
    {
        if((x%2)==0)
        {
        sum=((x%10)+(x/10));
        if (sum==6)
        printf("%d\n",x);
        }
        x++;
        goto loop;
    }
}