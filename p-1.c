/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,sum=0;
    printf("\n Enter 10 numbers\n");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    for(i=0; i<=9; i++)
    sum=sum+arr[i];
    printf("\n Sum of ten numbers is %d ",sum);
    return 0;
}