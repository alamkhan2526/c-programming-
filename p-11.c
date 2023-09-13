/*11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);
    num=num/10*10+9;
    printf("\n %d",num);
    return 0;
}