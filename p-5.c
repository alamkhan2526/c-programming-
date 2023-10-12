/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i,min;
    printf("\n Enter 10 numbers");
    for(i=0; i<=9; i++)
    scanf("%d",&arr[i]);
    min=arr[0];
    for(i=0; i<=9; i++)
    if(min>arr[i])
    min=arr[i];
    printf("\n smallest number in array is %d",min);
    return 0;
}