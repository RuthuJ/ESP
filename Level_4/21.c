/*Question:  Print the number of zeroes you encounter between the numbers 0 to 
1000 */

#include <stdio.h>

int countzeroes(int num)
{
    int count=0;
    if(num==0)
    {
    return 1;
    }
    while (num>0)
    {
        if (num%10==0)
        {
            count++;
        }
        num/=10;
    }
    return count;
}
int main()
{
    int totalzeroes =0;
    for (int i=0;i<=1000;i++)
    {
        totalzeroes+=countzeroes(i);
    }
    printf(" The total number of zeroes between 0 to 1000 is %d",totalzeroes);
    return 0;
}