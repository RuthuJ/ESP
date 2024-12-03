/*Question:  Print the total number of non-decreasing numbers from 1000 to 9999.Non 
decreasing numbers have individual digits that do not have a decreasing order 
from left to right. 
(For e.g.: 1234 is a non-decreasing number where as 2134 is not) */

#include <stdio.h>

// Function to check if a number is non-decreasing
int is_non_decreasing(int n) {
    int prev_digit = 10; // Initialize with a digit greater than any possible digit (0-9)

    while (n > 0) {
        int current_digit = n % 10; // Extract the last digit
        if (current_digit > prev_digit) {
            return 0; // Not non-decreasing
        }
        prev_digit = current_digit; // Update the previous digit
        n /= 10; // Remove the last digit
    }
    return 1; // Non-decreasing
}

int main() {
    int count = 0;

    // Iterate through all numbers from 1000 to 9999
    for (int i = 1000; i <= 9999; i++) {
        if (is_non_decreasing(i)) {
            count++;
        }
    }

    // Print the total count of non-decreasing numbers
    printf("Total number of non-decreasing numbers from 1000 to 9999: %d\n", count);

    return 0;
}
