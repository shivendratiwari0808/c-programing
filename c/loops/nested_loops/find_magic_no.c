#include<stdio.h>
int main (){
    long n,s;
    printf("enter the no :");
    scanf("%ld",&n);
    while(n>9 || n<-9)
    {
        for(s=0;n!=0;n=n/10)
        s+=n%10;
        n=s;
    }
    if(n==1)
    {
        printf("magic no");
    }
    else
    {
        printf("not a magic no");
    }
    return 0;
}