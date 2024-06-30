#include<stdio.h>
int main(){
    int n;
    printf("enter n values :");
    scanf("%d",&n);
    if(n%2==0)
    {
        puts("even");
    }
    else
    {
        puts("odd");
    }
    puts(n%2? "odd" : "even");

    return 0;

}