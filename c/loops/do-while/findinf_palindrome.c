#include<stdio.h>
int main(){
    long m,n,rev=0;
    int r;
    printf("enter n value :");
    scanf("%ld",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(m==rev)
    {
        puts("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}