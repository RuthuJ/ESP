/*Question:    Get a string of numbers up to 50 digits and remove all leading zeros.  
E.g.: 00000012345   Answer: 12345  */

#include <stdio.h>
#include <string.h>

int main() {
    char str[51]; // Define a character array to store the string (up to 50 digits + 1 for '\0')

    // Prompt the user to enter a string
    printf("Enter a string of numbers (up to 50 digits): ");
    scanf("%50s", str); // Limit input to 50 characters

    // Find the first non-zero character
    int i = 0;
    while (str[i] == '0') {
        i++;
    }

    // Check if the string is only zeros
    if (str[i] == '\0') {
        printf("Answer: 0\n"); // If all characters are zeros, the answer is "0"
    } else {
        printf("Answer: %s\n", &str[i]); // Print the string starting from the first non-zero character
    }

    return 0;
}
