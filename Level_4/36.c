/*Question:    Get a number string up to 50 digits and convert it to integer array. */

#include <stdio.h>
#include <string.h>

int main() {
    char str[51];        // Define a character array to store the string (50 digits + 1 for '\0')
    int numArray[50];    // Define an integer array to store the digits
    int length;

    // Prompt the user to enter a number string
    printf("Enter a number string (up to 50 digits): ");
    scanf("%50s", str); // Read a string of up to 50 characters

    // Get the length of the string
    length = strlen(str);

    // Convert each character to an integer and store in the array
    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') { // Ensure it is a valid digit
            numArray[i] = str[i] - '0';      // Convert character to integer
        } else {
            printf("Invalid input: Non-numeric character found.\n");
            return 1; // Exit the program if an invalid character is found
        }
    }

    // Print the integer array
    printf("Integer array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numArray[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    char str[51];        // Define a character array to store the string (50 digits + 1 for '\0')
    int numArray[50];    // Define an integer array to store the digits
    int length = 0;      // Initialize length to 0

    // Prompt the user to enter a number string
    printf("Enter a number string (up to 50 digits): ");
    scanf("%50s", str); // Read a string of up to 50 characters

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Convert each character to an integer and store in the array
    for (int i = 0; i < length; i++) {
        if (str[i] >= '0' && str[i] <= '9') { // Ensure it is a valid digit
            numArray[i] = str[i] - '0';      // Convert character to integer
        } else {
            printf("Invalid input: Non-numeric character found.\n");
            return 1; // Exit the program if an invalid character is found
        }
    }

    // Print the integer array
    printf("Integer array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numArray[i]);
    }
    printf("\n");

    return 0;
}
