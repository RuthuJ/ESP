/*Question: Write a loop program to print odd numbers 1 to 9.
Answer: 1
3
5
7
9*/

#include<stdio.h>
int main()
{
    int x= 1;
    loop: if(x<10)
    {
        printf("%d\n",x);
        x+=2;
        goto loop;
    }
}