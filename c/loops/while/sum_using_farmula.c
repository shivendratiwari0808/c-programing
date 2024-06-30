#include<stdio.h>
int main () {
    int n,s;
    printf("enter n value :");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("sum=%d,avg=%.2f",s,(float)s/n);
    return 0;
}