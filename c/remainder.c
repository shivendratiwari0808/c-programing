#include<stdio.h>
int main (){
    int a,b; //a > b
    printf("enter Dividend : ");
    scanf("%d",&a);
    printf (" enter divisor : ");
    scanf ("%d",&b);
    int q = a/b;
    int r = a - b*q; // Divisor * quotient + remainder = dividend
    printf (" The Remainder when %d is divided by %d is : %d",a,b,r);
    return 0;

}