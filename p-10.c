/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],aj[10],i,j;
    printf("\n Enter 10 values");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    printf("\n Array elements of first");
    for(i=0; i<=9; i++)
    printf("%d ",arr[i]);
    for(i=0; i<=9; i++)
    for(j=i; j==i; j++)
    aj[j]=arr[i];
    printf("\n Element after copy in second array");
    for(j=0; j<=9; j++)
    printf("%d ",aj[j]);
    return 0;
}