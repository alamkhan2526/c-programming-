/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("\n Enter al number");
    scanf("\n%d",&num);
    num=num/10*10;
    printf("\n %d",num);
    return 0;
}