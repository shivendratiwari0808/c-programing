#include<stdio.h>
int main(){
    long n;
    int r,s=0;
    printf("enter n value ");
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("digits sum = %d",s);
    return 0;
}