/*Question:  Get a number and print its ASCII Value.*/

//single digit
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%c", &num);
    printf("The ASCII value of '%c' is: %d\n", num, num);

    return 0;
}

//multi digit

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("ASCII values of the digits are:\n");
    while (number > 0) {
        int digit = number % 10;         
        char char_digit = digit + '0';  
        printf("'%c' -> %d\n", char_digit, char_digit);
        number /= 10; 
    }

    return 0;
}
