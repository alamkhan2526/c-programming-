// Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0;
    printf("\n Enter the number");
    scanf("%d",&num);
    int num1=num;
    while(num1)
    {
        count++;
        num1=num1/10;
    }
    printf("\n there are %d digits in %d",count,num);
    return 0;

}