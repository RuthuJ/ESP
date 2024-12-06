/*     Question:    Get a string and find the length of the string  */

#include <stdio.h>
#include <string.h> // For strlen function

int main() {
    char str[100]; // Define a character array to store the string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string

    // Remove the newline character if present
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Adjust the length
    }

    // Print the length of the string
    printf("The length of the string is: %zu\n", len);

    return 0;
}


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            break;
        }
        length++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}

