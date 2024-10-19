/*Question: Get a four-digit number from user and only reverse the 
last two digits of the number, then print the number.
Example: Input: 9561 Output 5961. Input: 3859 Output: 8359*/


#include<stdio.h>
int main()
{
    int x, first_digit, last_digit, reverse, hundred, thousand;
    printf ("enter num:");
    scanf("%d",&x);
    first_digit= x/100;
    last_digit= x%100;
    hundred = first_digit%10;
    thousand = first_digit/10;
    reverse = (hundred*1000)+(thousand*100)+last_digit;
    printf("reverse = %d", reverse);

}