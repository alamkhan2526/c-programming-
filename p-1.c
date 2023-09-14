//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);
    if(num>0)
    printf("%d is a positive number",num);
    else
    printf("\n%d is non-positive",num);
    return 0;
}