/*Question: Get a two-digit number from user and print the ten’s digit.
Example: Input: 45 Output 4. Input: 56 Output: 5*/

#include<stdio.h>
int main(){
    int x,y;
    printf("enter num:");
    scanf("%d",&x);
    y=x/10;
    printf("y= %d",y);
}