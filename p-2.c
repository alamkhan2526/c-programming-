//Write a program to print a given number without its last digit.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,r;
    printf("\n Enter a number");
    scanf("%d",&num);
    r=num/10;
    printf("\n%d",r);
    return 0;
}