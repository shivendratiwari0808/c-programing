#include<stdio.h>
int main (){
    int i,n,f1=0,f2=1,f3;
    printf("enter no of times :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%4d",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    return 0;
}