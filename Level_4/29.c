/*Question:  Get a number as String and print the integer value of the string.  */

#include <stdio.h>
#include <stdlib.h> 

int main() {
    char str[100]; 
    printf("Enter a number as a string: ");
    fgets(str, sizeof(str), stdin); 
    int number = atoi(str);
    printf("The integer value of the string is: %d\n", number);

    return 0;
}

#include <stdio.h>
#include <stdlib.h> // For strtol function

int main() {
    char str[100];
    char *endptr;
    long number;

    printf("Enter a number as a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert the string to a long integer using strtol
    number = strtol(str, &endptr, 10);

    // Check if the conversion was successful
    if (*endptr != '\n' && *endptr != '\0') {
        printf("Invalid input. Not a valid number.\n");
    } else {
        printf("The integer value of the string is: %ld\n", number);
    }

    return 0;
}
