/*Question: Get a two digit number from user and subtract 5 from that number if the 
sum of the digits of the number is odd, then print the result. Do not use
“if”.
Example: Input: 95 Output 95. Input: 72 Output: 67*/

#include<stdio.h>
int main()
{
    int x,y,z,result,sum;
    printf("enter num:");
    scanf("%d",&x);
    y=x/10;
    z=x%10;
    sum=(y+z)%2;
    //a= (sum%2);
    result = x-(sum*5);
    printf("result= %d", result);

}