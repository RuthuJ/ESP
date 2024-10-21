/*Question: Write a loop program to print sum of 1 to 5.
Answer: 15*/

#include<stdio.h>
int main()
{
    int x = 1;
    int sum= 0;
    loop: if(x<6)
    {
        sum+=x;
        x++;
        goto loop;
    }
    printf("sum=%d",sum);

}