/*Question:  Write a program to print the total number of TWO digit Prime numbers 
Answer : 21 */

#include <stdio.h>

int count_two_digit_primes();

int main() 
{
    int result = count_two_digit_primes();
    printf("The total number of two-digit prime numbers is %d\n", result);
    return 0;
}

int count_two_digit_primes()
 {
    int count = 0;
    for (int i = 10; i < 100; i++) 
    {
        int is_prime = 1;  
        
        for (int j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {  
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            count++; 
        }
    }

    return count;
}
