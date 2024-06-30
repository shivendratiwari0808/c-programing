#include<stdio.h>
int main(){
    int i,n,c=0;
    printf("enter a no :");
    scanf("%d",&n);
    if(n==1)printf("not a prime/composite no");
    else
    {
        for(i=1;i<=n;i++)if(n%i==0)c++;
        if(c==2)printf("prime no");else printf("composite no");
    }
    return 0;
}