/*Question:    Write a Calculator program that will give the "Calc" prompt and  
always stay on this prompt. When a user types one of the  
following commands, the program will calculate and give the 
result. 
Typing "Exit" will exit from the Calculator program. This program 
accepts up to 50-digit numbers. Then, the division will give the 
quotient and remainder. 
Calc> 12345678967354748+9876546877687678678678678 - Addition 
Calc> 12345678995387837883748798-8738478937937498237 - Subtraction 
Calc> 123478763783847239874 * 34837472384723894732 - Multiplication 
Calc> 1233489374983933498398095/3487384 - Division 
Calc> Exit - Quit. 
Note: 
Do not accept Invalid numbers. 
Do not print leading zeros. 
Use functions and write a professional program use Linux coding style. 
Each number can be of a different digit. 
Make sure that all the Input conditions are taken care. 
Try to minimize the execution speed.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_DIGITS 50

// Function to check if a string is a valid number (no leading zeros, only digits)
int is_valid_number(char *str) {
    if (str[0] == '\0' || !isdigit(str[0])) {
        return 0;
    }

    // Check for leading zeros
    if (str[0] == '0' && strlen(str) > 1) {
        return 0;
    }

    for (int i = 1; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

// Function to handle large number addition
void add_numbers(char *num1, char *num2) {
    unsigned long long n1 = atoll(num1);
    unsigned long long n2 = atoll(num2);
    printf("Result: %llu\n", n1 + n2);
}

// Function to handle large number subtraction
void subtract_numbers(char *num1, char *num2) {
    unsigned long long n1 = atoll(num1);
    unsigned long long n2 = atoll(num2);
    printf("Result: %llu\n", n1 - n2);
}

// Function to handle large number multiplication
void multiply_numbers(char *num1, char *num2) {
    unsigned long long n1 = atoll(num1);
    unsigned long long n2 = atoll(num2);
    printf("Result: %llu\n", n1 * n2);
}

// Function to handle large number division (quotient and remainder)
void divide_numbers(char *num1, char *num2) {
    unsigned long long n1 = atoll(num1);
    unsigned long long n2 = atoll(num2);

    if (n2 == 0) {
        printf("Error: Division by zero!\n");
        return;
    }

    printf("Quotient: %llu\n", n1 / n2);
    printf("Remainder: %llu\n", n1 % n2);
}

int main() {
    char command[100];
    char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1];
    char operator;

    printf("Calc> ");

    // Main loop
    while (1) {
        // Get the input command
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = '\0';  // Remove the trailing newline

        // Exit condition
        if (strcmp(command, "Exit") == 0) {
            printf("Exiting the calculator program.\n");
            break;
        }

        // Parsing the input string for operation and numbers
        int scanned = sscanf(command, "%s %c %s", num1, &operator, num2);

        if (scanned != 3 || !is_valid_number(num1) || !is_valid_number(num2)) {
            printf("Invalid input. Please enter valid numbers and operations.\n");
            printf("Calc> ");
            continue;
        }

        // Perform the operation based on the operator
        switch (operator) {
            case '+':
                add_numbers(num1, num2);
                break;
            case '-':
                subtract_numbers(num1, num2);
                break;
            case '*':
                multiply_numbers(num1, num2);
                break;
            case '/':
                divide_numbers(num1, num2);
                break;
            default:
                printf("Invalid operation. Please enter a valid operation (+, -, *, /).\n");
                break;
        }

        printf("Calc> ");
    }

    return 0;
}
