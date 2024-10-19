/*Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then 
print the sum, otherwise print the difference. 
Example: Input: 56 78 – Output: 22
Input: 14 65 - Output: 79*/

#include<stdio.h>
int main()
{
    int x, y, sum, difference;
    printf("enter two numbers:");
    scanf("%d %d",&x, &y);
    sum = x+y;
    if (sum<100)
    {
        printf("result= sum %d",sum);
    }
    else
    {
        if(x>y)
        {
            difference=x-y;
        }
        else{
            difference=y-x;
        }
    }
    printf("result=difference %d",difference);

}