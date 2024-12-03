/*Question:  Print the Largest Four digit prime number 
Answer: 9973*/

#include<stdio.h>

int largest_four_digit_prime() 
{
    int i, j;
    for(i = 9999; i >= 1000; i--) {
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
    result = largest_four_digit_prime();
    printf("The largest four-digit prime number is: %d\n", result);  
    return 0;
}