/*Question: Write a program to get a number from user and interchange the first and 
last digits and print the result.
Answer: Input : 123456 - Output – 623451
Input : 76895439- Output – 96895437
Input : 675 – Output - 576*/


#include<stdio.h>
int main()
{
    int num, first_digit, last_digit, temp;
    int power =1;
    int new_num=0;
    printf("enter num:");
    scanf("%d",&num);
    temp= num;
    last_digit= temp%10;
    while (temp>=10)
    {
        temp/=10;
        power*=10;
    }
    first_digit= temp;
    new_num= last_digit*power+(num%power-last_digit)+first_digit;
    printf("%d",new_num);

}
