//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
#include<conio.h>
int  main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);

    if(num%3==0  &&  num%2==0)
    printf("\n %d is divisible by 3 and 2",num);
    else
    printf("\n %d is not dibisible by 3 and 2",num);
    return 0;
}