/*Question:  Write a program to print the total number of  single digit Prime numbers 
Assume 0 & 1 are not Prime. 
Answer : 4 */

#include <stdio.h>

int count_single_digit_primes();

int main() 
{
    int result = count_single_digit_primes();
    printf("The total number of single-digit prime numbers is %d\n", result);
    return 0;
}

int count_single_digit_primes()
 {
    int count = 0;
    for (int i = 2; i < 10; i++) 
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
