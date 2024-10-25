/*Question:  Write a program to get two numbers from user and print the HCF of 
those numbers. */

#include <stdio.h>

int main() {
    int num1, num2, hcf;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    int a = num1;
    int b = num2;

    
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp;  
    }
    hcf = a; 

    printf("The HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
