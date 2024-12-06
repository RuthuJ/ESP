/*   Question:  Get an integer and print each digit as character.  
  Print one character on one line. */

  #include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting to positive
    if (number < 0) {
        printf("-\n"); // Print the negative sign on a separate line
        number = -number; // Make the number positive
    }

    // Find the total number of digits and store them in reverse order
    int digits[10], count = 0;
    while (number > 0) {
        digits[count++] = number % 10; // Extract the last digit
        number /= 10;                  // Remove the last digit
    }

    // Print digits in correct order
    for (int i = count - 1; i >= 0; i--) {
        printf("%c\n", digits[i] + '0'); // Convert each digit to a character
    }

    return 0;
}
