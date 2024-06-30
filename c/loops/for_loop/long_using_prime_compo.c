#include<stdio.h>
int main(){
    int i,n;
    printf("enter a number :");
    scanf("%ld",&n);
    if(n==1) printf("not a prime/composite no");
    else
    {
        for(i=2;i<=n;i++)
        if(n%i==0)
        {
            puts("composite no");return;
        }
    }
    printf("prime no");
    
}