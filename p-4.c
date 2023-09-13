/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    float A;
    printf("\n Enter the radius of cirle");
    scanf("%d",&r);
    A=22.7*r*r;
    printf("\n  \" Area of circle is %f having radius %d",A,r);
    return 0;
}