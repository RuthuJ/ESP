/*Question: Write a loop program to print 1 to 5 on one by one.
Answer: 1
2
3
4
5*/

#include<stdio.h>
int main()
{
    int x;
    
    loop: if(x<6)
    {
        printf("%d\n",x);
        x++;
        goto loop;
        
    }
}