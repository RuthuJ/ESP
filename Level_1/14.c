/*Question: Get a two-digit number from user and print the reverse of the number.
Example: Input: 56 Output 65. Input: 59 Output: 95*/

#include<stdio.h>
int main(){
    int x,ones,tens,reverse;
    printf("enter num:");
    scanf("%d",&x);
    tens=x/10;
    ones=x%10;
    reverse=(ones*10)+tens;
    printf("reverse= %d",reverse);
}