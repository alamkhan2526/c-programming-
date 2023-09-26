// Write a recursive function to print first N even natural numbers
#include<stdio.h>
#include<conio.h>
void even(int n);
int main()
{
    int n;
    printf("\n Enter the value of n");
    scanf("%d",&n);
    even(n*2);
    return 0;
}void even(int n)
{
    if(n<2)
    return;
    else
    {
        even(n-2);
        printf("%d ",n);

    }
}