/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float cost,selling,p,l;
    float pp,lp;
    printf("\n Enter the cost and selling price of procuct");
    scanf("%f%f",&cost,&selling);
    if(cost>selling)
    {
        l=cost-selling;
       
        lp=(l/cost)*100;
        printf("\n %f is the loss percentage",lp);
        
    }
    else
    {
        p=selling-cost;
       
        pp=(p/cost)*100;
        printf("\n %f is the profit percentage",pp);
       
    }
    return 0;
}