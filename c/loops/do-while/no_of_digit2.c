#include<stdio.h>
int main(){
    long n;
    int c=0;
    printf("enter n value :");
    scanf("%ld",&n);
    do
    {
        c++;
        n=n/10;
    }
    while(n!=0);
    printf("no of digits = %d",c);
    return 0;
}