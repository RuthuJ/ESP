/*Question: Write a loop program to print the two-digit odd numbers, below 20.
Answer: 11
13
15
17*/

/*#include<stdio.h>
int main()
{
    int x= 11;
    loop: if(x<20)
    {
        printf("%d\n",x);
        x+=2;
        goto loop;
    }
}*/

#include<stdio.h>
int main()
{
    int x=10;
    loop: if (x<10)
    {
        if((x%2)!=0)
        {
            printf("%d\n",x);
        }
        x++;
        goto loop;
    }
}