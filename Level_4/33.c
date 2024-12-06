/*Question:    Get a String of numbers up to 50 digits and validate the number.  
 E.g.:  1234567 → valid number  
12abc35 → Not a valid number  */

#include <stdio.h>
#include <ctype.h> // For isdigit function

int main() {
    char str[51]; // Define a character array to store the string (50 digits + 1 for '\0')

    // Prompt the user to enter a string
    printf("Enter a string of numbers (up to 50 digits): ");
    scanf("%50s", str); // Limit input to 50 characters

    // Validate the string
    int isValid = 1; // Assume the string is valid
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit((unsigned char)str[i])) { // Check if the character is not a digit
            isValid = 0; // Mark as invalid
            break;
        }
    }

    // Print the result
    if (isValid) {
        printf("'%s' is a valid number.\n", str);
    } else {
        printf("'%s' is not a valid number.\n", str);
    }

    return 0;
}
