#include<stdio.h>
int sum();
void main()
{
    int s=sum();
    printf("sum = %d\n",s);
    printf("sum = %d\n",sum());
}
int sum()
{
    int a=100, b=200;
    return a+b;
}