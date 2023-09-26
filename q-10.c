// Write a recursive function to print reverse of a given number
#include<stdio.h>
#include<conio.h>
void reverse(int num);
int main()
{
    int num;
    printf("\n Ente a number");
    scanf("%d",&num);
    reverse(num);
    return 0;
}void reverse(int num)
{
    if(num<=0)
    return;
    else
    {
        printf("%d",num%10);
        reverse(num/10);
    }
}