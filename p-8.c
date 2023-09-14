/*-Write a program to check whether a given number is a Prime number or
not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=2;
    printf("\n Enter the value of num");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
        printf("\n %d is not a prime number",num);
        break;
        }
        i++;

    }
    if(i==num)
    printf("\n %d is a prime number",num);
    return 0;
}