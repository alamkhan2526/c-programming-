/*Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\nEnter a number");
    scanf("%d",&num);
    if(num & 1 == 1)
    printf("\n %d is an odd number",num);
    else
    printf("\n %d is an even number",num);
    return 0;
    
}