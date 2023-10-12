/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/
#include<stdio.h>
#include<conio.h>
int main()
{   
    int n;
    int arr[n],i;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    printf("\n Enter %d values of array",n);
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
    printf("\n array element entered by you\n");
    for(i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("\n Array elements in reverse order\n");
    for(i=n-1; i>=0;i--)
    printf("%d ",arr[i]);
    return 0;
}