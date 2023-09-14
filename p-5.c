// Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1,sum=0;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i*i;
        i++;
    }

    printf("\n %d is the cube of first %d natural number ",sum,n);
    return 0;

}