/*Question:  Get a number from user and Check Prime or Not and print the result. 
Write your code inside the function. Do not Change the format. 
Example:  
Input: 61 Output Number is Prime. Input: 1200 Output: Number is not Prime. */

#include <stdio.h> 
int isPrime(int no); 
int main() 
{ 
int number,result; 
printf("enter num:");
scanf("%d",&number); 
result = isPrime(number); 
if(result == 1) 
printf("Number is Prime"); 
else 
printf("Number is not Prime"); 
return 0; 
} 
int isPrime(int no) 
{ 
if (no<1)
return 0;
for(int i=2;i*i<=no;i++)
{
    if(no%i==0)
    {
        return 0;
    }
    
} 
return 1; 
} 