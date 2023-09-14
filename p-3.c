/*Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);
    if(num%2==0)
    printf("\n %d is an even number",num);
    else
    printf("\n %d is an odd number",num);
    return 0;
}