// Write a program to calculate LCM of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,max;
    printf("\n Enter two numbers");
    scanf("%d%d",&n1,&n2);
    max=n1>n2?n1:n2;

    while(1)
{

    if(max%n1==0 && max%n2==0)
    {
    printf("\n LCM of %d and %d is %d",n1,n2,max);
    break;
    }
    max++;

    }
    return 0;
}