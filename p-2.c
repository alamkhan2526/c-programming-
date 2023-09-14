/*Write a program to check whether a given number is divisible by 5 or not*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\nEnter a number",&num);
    scanf("%d",&num);

    if(num%5==0)
    printf("\n %d is divisible by 5",num);
    else 
    printf("\n %d is not divisible by 5",num);
    return 0;
}