/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;

    printf("\n Enter three sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b==c  || a+c==b   || b+c==a)
    printf("\n The triangle is a valid ");
    else
    printf("\n The triangle is not valid");
    return 0;
}