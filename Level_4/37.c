/*Question:    Add two integer arrays of up to 50 digits and  
store the result in a 51 digits array. */

#include <stdio.h>
#include <string.h>

int main() {
    char num1[51], num2[51];   // Input strings for the two numbers (50 digits + 1 for '\0')
    int arr1[50] = {0}, arr2[50] = {0}, result[51] = {0}; // Arrays for digits and the result
    int len1, len2, maxLen, carry = 0;

    // Input the two numbers
    printf("Enter the first number (up to 50 digits): ");
    scanf("%50s", num1);
    printf("Enter the second number (up to 50 digits): ");
    scanf("%50s", num2);

    // Calculate the lengths manually
    len1 = 0;
    while (num1[len1] != '\0') len1++;
    len2 = 0;
    while (num2[len2] != '\0') len2++;

    // Copy the numbers into arrays, reversed for easier addition
    for (int i = 0; i < len1; i++) {
        arr1[len1 - 1 - i] = num1[i] - '0'; // Reverse copy
    }
    for (int i = 0; i < len2; i++) {
        arr2[len2 - 1 - i] = num2[i] - '0'; // Reverse copy
    }

    // Perform addition
    maxLen = (len1 > len2) ? len1 : len2;
    for (int i = 0; i < maxLen; i++) {
        int sum = arr1[i] + arr2[i] + carry;
        result[i] = sum % 10;  // Store the last digit of the sum
        carry = sum / 10;      // Carry forward the overflow
    }

    // Handle the final carry
    if (carry) {
        result[maxLen] = carry;
        maxLen++;
    }

    // Print the result in the correct order
    printf("Result: ");
    for (int i = maxLen - 1; i >= 0; i--) { // Print in reverse order
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
