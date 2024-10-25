/*Question:  Write a program get number from user print the total number digits 
which are odd in the number. 
Answer:  
Input : 12345678   -  Output : 4 
Input : 987531   - Output  : 5 */

#include <stdio.h>
int main()
{
    int num,count=0,i=1,temp;
    printf("enter num:");
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        if(temp%2!=0)
        {
            count++;
        }
        num/=10;
        i++;
    }
    printf("total number of odd numbers in digit is %d",count);


}