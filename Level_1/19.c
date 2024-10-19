/*Question: Get a two-digit number from user and make the ten’s digit 1,
then print it.
Example: Input: 95 Output 15. Input: 82 Output: 12*/

#include<stdio.h>
int main()
{
    int x, y, result;
    printf("enter num:");
    scanf("%d", &x);
    y= x%10;
    result = 10 +y ;
    printf("result = %d", result);

}
