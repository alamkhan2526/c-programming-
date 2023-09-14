// Write a program to reverse a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);
    while(num)
    {
        printf("%d",num%10);
        num=num/10;
    }
    return 0;
}