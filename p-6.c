/*Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("\n Enter two numbers");
    scanf("%d%d",&num1,&num2);

    if(num1==num2)
    printf("\n %d ",num1);
    else
    {
    if(num1>num2)
    printf("\n %d ",num1);
    else
    printf("\n %d",num2);
    }
    return 0;
}