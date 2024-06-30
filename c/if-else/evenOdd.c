#include<stdio.h>
int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(n%2==0)
    puts("even");
    else
    puts("odd");
    return 0;
}