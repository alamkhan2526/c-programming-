//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0;
    printf("\n Enter three digit number");
    scanf("%d",&num);

    while(num)
    {
        sum=sum+num%10;
        num=num/10;

    }
    printf("\n %d",sum);
}