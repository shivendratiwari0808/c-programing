#include<stdio.h>
void show(int a, int b)
{
    printf("a=%d,b=%d",a,b);
}
void main(){
    int n=2;
    show(n++,n++);
}