#include<stdio.h>
int main (){
    int n,*p=&n;
    printf("enter a no ");
    scanf("%d",&n);
    puts(n%2?"odd" : "even");
    puts(*p%2?"odd" : "even");
    return 0;
}