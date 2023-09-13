//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char b;
    float k;
    double d;
    printf("\n%i ",sizeof(a));
    printf("\n%c ",sizeof(b));
    printf("\n%f ",sizeof(k));
    printf("\n%li ",sizeof(d));
}