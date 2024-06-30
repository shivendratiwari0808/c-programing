#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>=10 && n<=99)
    puts("double digit no");
    if(n<=10 || n>=99)
    puts("not a double digit no");
    return 0;
}