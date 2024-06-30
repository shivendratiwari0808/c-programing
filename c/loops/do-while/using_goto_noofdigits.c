#include<stdio.h>
int main(){
    long n;
    int c;
    printf("enter n value :");
    scanf("%ld",&n);
    c=printf("%ld",n);
    if(n<=0)
    {
        c--;
    }
    printf(" is a %d digits no",c);
    return 0;
}