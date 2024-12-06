/*Question:    Convert an integer array of up to 50 digits to character array and print  
using print using “printf(“%s”, ….);” 
E.g.:    
.  
.  
Array – 1 4  5 8 7 6 3 
Answer:   1458763 */

#include <stdio.h>

int main() {
    int size;

    // Prompt user to input the size of the array
    printf("Enter the size of the array (up to 50): ");
    scanf("%d", &size);

    // Ensure size is within bounds
    if (size < 1 || size > 50) {
        printf("Invalid size! Please enter a number between 1 and 50.\n");
        return 1;
    }

    int intArray[size];
    char charArray[size + 1]; // Character array (size + 1 for the null terminator)

    // Input the integer array
    printf("Enter %d integers (0-9) for the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &intArray[i]);

        // Ensure each input is a valid single-digit number
        if (intArray[i] < 0 || intArray[i] > 9) {
            printf("Invalid input! Only single-digit integers (0-9) are allowed.\n");
            return 1;
        }
    }

    // Convert integer array to character array
    for (int i = 0; i < size; i++) {
        charArray[i] = intArray[i] + '0'; // Convert integer to character
    }
    charArray[size] = '\0'; // Null-terminate the character array

    // Print the character array as a string
    printf("Converted character array: %s\n", charArray);

    return 0;
}
