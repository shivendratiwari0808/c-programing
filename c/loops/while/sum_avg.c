#include<stdio.h>
int main(){
    int n,i=1,s=0;
    printf("enter n value :");
    scanf("%d",&n);
    while (i<=n)
    {
        s+=i;
        i++;
    }
    printf("sum=%d,avg=%.2f",s,(float)s/n);
    return 0;
}