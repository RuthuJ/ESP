/*Question:  Write a program to print total number of THREE digit Prime numbers 
Answer - 143*/

#include <stdio.h>

int count_three_digit_primes();

int main() 
{
    int result = count_three_digit_primes();
    printf("The total number of three-digit prime numbers is %d\n", result);
    return 0;
}

int count_three_digit_primes()
 {
    int count = 0;
    for (int i = 100; i < 1000; i++) 
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
