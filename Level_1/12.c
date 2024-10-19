/*Question: Get a two-digit number from user and print sum the digits.
Example: Input: 56 Output 11. Input: 69 Output: 15*/

#include<stdio.h>
int main(){
    int x,y,z,sum;
    printf("enter num:");
    scanf("%d",&x);
    y=x/10;
    z=x%10;
    sum=y+z;
    printf("sum= %d",sum);
}