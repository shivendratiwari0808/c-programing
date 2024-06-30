#include<stdio.h>
void sum(int, int);
void main(){
    int a=10,b=20;
    sum(a,b);
}
void sum(int a, int b)
{
    printf("sum = %d",a+b);
}