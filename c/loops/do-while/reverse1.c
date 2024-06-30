#include<stdio.h>
int main(){
    long n,rev=0;
    int r;
    printf("enter n value :");
    scanf("%ld",&n);
    printf("reverse no is :");
    if(n<0) printf("-",n=-n);
    do{
        r=n%10;printf("%d",r); n=n/10;
    }
    while(n!=0);
    return 0;
}