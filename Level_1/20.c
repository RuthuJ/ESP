/*Question: Get a three-digit number from user and make the one’s digit as 2,
then print it.
Example: Input: 695 Output 692. Input: 182 Output: 182*/

#include<stdio.h>
int main(){
    int x, y, ones, result;
    printf("enter num:");
    scanf("%d",&x);
    ones= x%10;
    ones = 2;
    y= x/10;
    result= (y*10)+ones ;
    printf("result= %d",result);
}