/*Question:  Get a number from user and check whether the digits are in ascending order.
Example:  Input: 1234 Output: Yes. Input: 5687 Output: No */


#include <stdio.h>

int check_ascending(int no);

int main() 
{ 
    int number1, result; 
    printf("Enter a number: ");
    scanf("%d", &number1);
    
    result = check_ascending(number1); 
   
    if(result == 1) 
        printf("Yes\n"); 
    else 
        printf("No\n");
    
    return 0; 
} 

int check_ascending(int no) 
{ 
    int last_digit = no % 10;  
    no /= 10;                  
    
    while (no > 0) 
    { 
        int current_digit = no % 10; 
        
        if (current_digit > last_digit) 
            return 0; 
        
        last_digit = current_digit; 
        no /= 10;                   
    } 
    
    return 1; 
}

 