#include<stdio.h>
int evenodd(int);
int main(){
    int a;
    printf("enter a no :");
    scanf("%d",&a);
    if(evenodd(a))
    puts("odd");
    else
    puts("even");
    puts(evenodd(a)? "odd" : "even");
}
int evenodd(int f)
{
    return f%2;
}