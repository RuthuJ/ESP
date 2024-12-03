/*Question:  Get 2 numbers from user and find the LCM of them. 
Example:   Input 20,30    Output:60 */

#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using the formula: LCM = (a * b) / GCD(a, b)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Get input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate and print the LCM
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
