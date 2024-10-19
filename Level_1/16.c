/*Question: Get a four-digit number from user and only reverse the 
first two digits of the number, then print the number.
Example: Input: 9561 Output 9516. Input: 3859 Output: 3895*/

#include<stdio.h>
int main()
{
    int x, first_digit, last_digit, reverse, ones, tens;
    printf ("enter num:");
    scanf("%d",&x);
    first_digit= x/100;
    last_digit= x%100;
    ones = last_digit%10;
    tens = last_digit/10;
    reverse = (first_digit*100)+(ones*10)+tens;
    printf("reverse = %d", reverse);

}