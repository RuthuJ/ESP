/*Question: Get a three-digit number from user and print the ten’s digit.
Example: Input: 456 Output 5. Input: 569 Output: 6*/

#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter num:");
    scanf("%d",&x);
    y=x/10;
    z=y%10;
    printf("z= %d",z);
}