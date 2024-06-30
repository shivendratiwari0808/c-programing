#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d %c+",i,253,s=s+i*i);
    }
    printf("\b=%d",s);
    return 0;
}