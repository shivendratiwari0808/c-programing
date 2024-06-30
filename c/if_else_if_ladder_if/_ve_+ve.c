#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>0)
    {
        puts("+ve");
    }
    else if(n<0)
    {
        puts("-ve");
    }
    else
    {
        puts("zero");
    }
    return 0;
}