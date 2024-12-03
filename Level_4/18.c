/*Question:  Print the Smallest Four digit prime number 
Answer: 1009 */

#include<stdio.h>

int Smallest_four_digit_prime() 
{
    int i, j;
    for(i = 1000; i <= 9999; i++) {
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
    result = Smallest_four_digit_prime();
    printf("The Smallest four-digit prime number is: %d\n", result);  
    return 0;
}