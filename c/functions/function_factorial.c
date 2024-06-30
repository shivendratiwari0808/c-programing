#include<stdio.h>
long fact() //function defination
{
    long f=1;
    int n;
    printf("enter a no :");
    scanf("%d",&n);
    while(n>1)f=f*n--;
    return f;
}
void main()
{
    printf("factorial = %ld",fact()); //fun calling
}