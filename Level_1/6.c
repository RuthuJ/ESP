/*Get a number from user and divide by the number by 8 and print the remainder.
Example: Input: 45 Output 5. Input: 143 Output: 7*/

#include<stdio.h>
int main(){
    int x,y;
    printf("enter num:");
    scanf("%d",&x);
    y=x%8;
    printf("y= %d",y);
}