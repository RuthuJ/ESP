/*Question:    Get a number up to 50 digits and reverse it. 
E.g.: 12345678912345 
Answer: 54321987654321*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[51]; // Define a character array to store the string (50 digits + 1 for '\0')

    // Prompt the user to enter a number
    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", str); // Limit input to 50 characters

    int length = strlen(str); // Find the length of the string

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        // Swap the characters at positions i and (length - i - 1)
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Print the reversed string
    printf("Answer: %s\n", str);

    return 0;
}
