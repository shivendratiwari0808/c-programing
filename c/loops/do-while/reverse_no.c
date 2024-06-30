#include<stdio.h>
int main(){
    long n,rev=0;
    int r;
    printf("enter n value :");
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        rev = rev*10+r;
        n=n/10;
    }
    printf("reverse no is %ld",rev);
    return 0;
}