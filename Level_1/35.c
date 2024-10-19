/*Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and 
hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s 
digit
Example: Input: 856 978 – Output: 1
Input: 128 365 - Output: 2*/

#include<stdio.h>
int main()
{
    int num1,num2;
    int ones1, tens1, hundreds1;
    int ones2, tens2, hundreds2;
    int result;
    printf("enter two, three digit number");
    scanf("%d %d", &num1, &num2);
    ones1 = num1 % 10;
    tens1 = (num1 / 10) % 10;
    hundreds1 = num1 / 100;

    ones2 = num2 % 10;
    tens2 = (num2 / 10) % 10;
    hundreds2 = num2 / 100;

    if (tens1 > tens2)
    {
        result = ones1 - hundreds1;
    }
    else
    {
        result = ones2 - hundreds2;
    }
    if (result < 0)
    {
        result = -result;
    }
    printf("Result = %d\n", result);

}