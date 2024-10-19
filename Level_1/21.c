/*Question: Get a three-digit number from user and make the ten’s digit as 0,
then print it.
Example: Input: 695 Output 605. Input: 182 Output: 102*/

#include<stdio.h>
int main(){
    int x, y, ones, tens, result;
    printf("enter num:");
    scanf("%d",&x);
    ones= x%10;
    tens= (x/10)%10;
    tens= 0;
    y= x/100;
    result= (y*100)+(tens*10)+ones ;
    printf("result= %d",result);
}