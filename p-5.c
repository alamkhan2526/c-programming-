// Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=0;
    printf("\n Enter a number");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        i++;

    }
    if(i==3)
    printf("\n The given number is a 3 digit number");
    else
    printf("\n The given number is not a 3 digit number");
    return 0;
}