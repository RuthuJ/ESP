/*Question:  Print the largest Three digit prime number 
Answer: 997 */

#include<stdio.h>

int largest_three_digit_prime() 
{
    int i, j;
    for(i = 999; i >= 100; i--) {
        int is_prime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                is_prime = 0;  
                break;  
            }
        }
        if(is_prime)
        {
            return i;
        }
    }
    
    return -1;
}
int main() {
    int result;
    result = largest_three_digit_prime();
    printf("The largest three-digit prime number is: %d\n", result);  
    return 0;
}

