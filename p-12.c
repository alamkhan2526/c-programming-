/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int inr;
    printf("\nEnter Inr");
    scanf("%d",&inr);
    printf("\n%f",76.23*inr);
    return 0;
}