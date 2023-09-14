//Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);

    num>0?printf("\n %d is a positive number",num):num<0?printf("\n %d is a negative number",num):printf("\n %d is zero",num);
    return 0;
}