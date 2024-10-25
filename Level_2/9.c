/*Question: Write a loop program to print the sum of two-digit numbers whose 
one’s digit is 5.
Answer: 495*/

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
        if (ones==5)
        {
        sum+=x;
        }
        x++;
        goto loop;
    }
    printf("%d\n",sum);
}