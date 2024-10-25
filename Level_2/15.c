/*Question: Write a program to get a number from user and if the last digit of the 
number is even print the same number. If the last digit of the number is 
odd then subtract 1 from the last digit and print the number. 
(Note: Last digit -MSB)
Answer: Input : 123456 - Output – 123456
Input : 96895439- Output – 76895439
Input : 675 – Output - 575*/

#include<stdio.h>
int main()
{
    int num, first_digit, last_digit, temp;
    int power =1;
    int new_num=0;
    printf("enter num:");
    scanf("%d",&num);
    temp=num;
    while (temp>10)
    {
        temp/=10;
        power*=10;
    }
    first_digit= temp;
    if ((first_digit%2)!=0)
    {
        int new_num= (first_digit-1)*power+(num%power);
        printf("%d",new_num);
        
    }
    else
    {
        printf("%d",num);
    }
    
}
