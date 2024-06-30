#include<stdio.h>
int main(){
    long n;
    printf("enter n value :");
    scanf("%ld",&n);
    printf("last digit=%d\n",n%10);
    while(n>=9 || n<-9)n=n/10;
    printf("first digit = %d",n);
    return 0;
}