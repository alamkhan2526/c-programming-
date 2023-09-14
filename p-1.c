// Write a program to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i=1;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("\n sum of %d natural numbers is %d",n,sum);
    return 0;
}