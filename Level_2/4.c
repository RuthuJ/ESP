/*Question: Write a loop program to print sum of 6 to 1.
Answer: 21*/

#include<stdio.h>
int main()
{
    int x=7;
    int sum=0;
    loop: if(x>0)
    {
        x--;
        sum+=x;
        goto loop;
    }
    printf("sum=%d",sum);
}