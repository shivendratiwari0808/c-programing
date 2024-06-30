#include<stdio.h>
int main(){
    int n;
    printf("enter a person age ");
    scanf("%d",&n);
    if(n>=18)
    puts("eligible");
    else
    puts("not a eligible");
    return 0;
}