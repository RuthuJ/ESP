/*Question:    Write a program to multiply up to two 50 digit numbers. */

#include <stdio.h>
#include <string.h>

void multiplyLargeNumbers(char num1[], char num2[], char result[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int product[101] = {0}; // Maximum possible digits in the result (50 + 50)
    int i, j;

    // Reverse the numbers to simplify multiplication
    char revNum1[51], revNum2[51];
    for (i = 0; i < len1; i++) revNum1[i] = num1[len1 - i - 1];
    revNum1[len1] = '\0';
    for (i = 0; i < len2; i++) revNum2[i] = num2[len2 - i - 1];
    revNum2[len2] = '\0';

    // Perform multiplication
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            product[i + j] += (revNum1[i] - '0') * (revNum2[j] - '0');
            if (product[i + j] >= 10) { // Handle carry
                product[i + j + 1] += product[i + j] / 10;
                product[i + j] %= 10;
            }
        }
    }

    // Find the actual length of the result
    int resultLen = len1 + len2;
    while (resultLen > 1 && product[resultLen - 1] == 0) {
        resultLen--; // Remove leading zeros in reverse order
    }

    // Convert the product array back to a string
    for (i = 0; i < resultLen; i++) {
        result[i] = product[resultLen - i - 1] + '0';
    }
    result[resultLen] = '\0'; // Null-terminate the string
}

int main() {
    char num1[51], num2[51], result[101];

    // Input two large numbers as strings
    printf("Enter the first number (up to 50 digits): ");
    scanf("%50s", num1);
    printf("Enter the second number (up to 50 digits): ");
    scanf("%50s", num2);

    // Multiply the numbers
    multiplyLargeNumbers(num1, num2, result);

    // Print the result
    printf("Result: %s\n", result);

    return 0;
}
