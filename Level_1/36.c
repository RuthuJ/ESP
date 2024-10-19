/*Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the 
numbers. Print the sum of all the digits of the number whose sum of one’s and 
hundred’s digits is bigger.
Example: Input: 856 978 – Output: 24
Input: 128 365 - Output: 11*/

#include<stdio.h>

int main()
{
    int num1, num2;
    int ones1, tens1, hundreds1;
    int ones2, tens2, hundreds2;
    int sum1, sum2, totalSum;

    // Get two three-digit numbers from the user
    printf("Enter two three-digit numbers: ");
    scanf("%d %d", &num1, &num2);

    // Extract digits for num1
    ones1 = num1 % 10;
    tens1 = (num1 / 10) % 10;
    hundreds1 = num1 / 100;

    // Extract digits for num2
    ones2 = num2 % 10;
    tens2 = (num2 / 10) % 10;
    hundreds2 = num2 / 100;

    sum1 = ones1 + hundreds1;
    sum2 = ones2 + hundreds2;
    if (sum1 > sum2)
    {
        totalSum = ones1 + tens1 + hundreds1;
    }
    else
    {
        totalSum = ones2 + tens2 + hundreds2;
    }
    printf("Result = %d\n", totalSum);

    return 0;
}
