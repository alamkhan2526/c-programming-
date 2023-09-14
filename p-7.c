/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    int d=b*b-(4*a*c);
    if(d>0)
    printf("\n The root of the nature is real and different");
    if(d==0)
    printf("\n The root of the nature is real and equal");
    if(d<0)
    printf("\n The root of the nature is complex and different");
    return 0;
}