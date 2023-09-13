//3. Write a program to swap values of two int variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\n Enter two int values");
    scanf("%d%d",&a,&b);
    printf("\n a=%d    b=%d  ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n a=%d   b=%d ",a,b);
    return 0;
}