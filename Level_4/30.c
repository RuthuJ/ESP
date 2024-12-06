/*Question:  Get an integer and print it as string.  */

#include <stdio.h>

int main() {
    int number;
    char str[100]; // Define a character array to store the string

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Convert the integer to a string using sprintf
    sprintf(str, "%d", number);

    // Print the string
    printf("The string representation of the integer is: %s\n", str);

    return 0;
}
