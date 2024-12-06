/*Question:    Get two numbers of up to 50 digits and perform addition and  
print the result. */

#include <stdio.h>
#include <string.h>

void addLargeNumbers(char num1[], char num2[], char result[]) {
    int len1 = 0, len2 = 0;

    // Calculate lengths of both numbers manually
    while (num1[len1] != '\0') len1++;
    while (num2[len2] != '\0') len2++;

    int maxLen = (len1 > len2) ? len1 : len2;
    int carry = 0, index = 0;

    // Perform addition from the rightmost digit
    for (int i = 0; i < maxLen; i++) {
        int digit1 = (len1 - 1 - i >= 0) ? num1[len1 - 1 - i] - '0' : 0;
        int digit2 = (len2 - 1 - i >= 0) ? num2[len2 - 1 - i] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result[index++] = (sum % 10) + '0'; // Store the last digit of the sum
        carry = sum / 10;                  // Calculate carry
    }

    // Handle final carry
    if (carry > 0) {
        result[index++] = carry + '0';
    }

    // Null-terminate the result and reverse it
    result[index] = '\0';
    for (int i = 0; i < index / 2; i++) {
        char temp = result[i];
        result[i] = result[index - 1 - i];
        result[index - 1 - i] = temp;
    }
}

int main() {
    char num1[51], num2[51], result[52];

    // Input two large numbers as strings
    printf("Enter the first number (up to 50 digits): ");
    scanf("%50s", num1);
    printf("Enter the second number (up to 50 digits): ");
    scanf("%50s", num2);

    // Perform addition
    addLargeNumbers(num1, num2, result);

    // Print the result
    printf("Result: %s\n", result);

    return 0;
}
