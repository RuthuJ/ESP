/*Question: Get a three-digit number from user and print the reverse of the number.
Example: Input: 561 Output 165. Input: 859 Output: 958*/

#include<stdio.h>
int main(){
    int x, ones, tens, hundred, reverse;
    printf("enter num:");
    scanf("%d",&x);
    ones= x%10;
    tens= (x/10)%10;
    hundred= x/100;
    reverse=(ones*100)+(tens*10)+hundred;
    printf("reverse= %d",reverse);
}