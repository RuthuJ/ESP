/*Question:  Print the total number of all Palindrome numbers less than 100000. 
Example: 101,12321,656,99899,11511 */

#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int n) {
    int reversed = 0, original = n;

    // Reverse the number
    while (n > 0) {
        reversed = reversed * 10 + (n % 10); // Add the last digit to reversed
        n /= 10;                             // Remove the last digit
    }

    // A number is a palindrome if it equals its reverse
    return original == reversed;
}

int main() {
    int count = 0;

    // Iterate through all numbers less than 100,000
    for (int i = 0; i < 100000; i++) {
        if (is_palindrome(i)) {
            count++;
        }
    }

    // Print the total count of palindrome numbers
    printf("Total number of palindrome numbers less than 100,000: %d\n", count);

    return 0;
}
