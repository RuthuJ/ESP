/*Question:  Print the smallest Three digit prime number 
Answer: 101 */

#include<stdio.h>
int is_prime(int num) 
{
    if(num < 2) 
    return 0; 
    
        for(int i = 2; i <= num / 2; i++)
        {
        if(num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int num = 100;
    while(1) 
    {
        if(is_prime(num))
        {
            printf("The smallest three-digit prime number is: %d\n", num);
            break;
        }
        num++;
    }

    return 0;
}
