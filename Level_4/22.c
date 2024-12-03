/*Question:  Total number of prime numbers below 1,000,000 have the sum of their digits 
equal to 14? 
Example: 59.  5 + 9 = 14 */

#include <stdio.h>

int is_prime(int n) {
    if (n < 2) 
    return 0; 
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return 0; 
    }
    return 1; // Prime
}

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;    
    }
    return sum;
}

int main() {
    int count = 0;
    for (int i = 2; i < 1000000; i++) {
        if (is_prime(i) && sum_of_digits(i) == 14) {
            count++;
        }
    }
    printf("Total number of prime numbers below 1,000,000 with digit sum equal to 14: %d\n", count);

    return 0;
}
