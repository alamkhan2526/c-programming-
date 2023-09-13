//Write a program to print unit digit of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);
    printf("\n %d",num%10);
    return 0;
}