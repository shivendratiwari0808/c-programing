#include<stdio.h>
int main(){
    int n,f=1;
    printf("enter n value :");
    scanf("%d",&n);
    while(n>1)
    {
        f=f*n;
        n--;
    }
    printf("factroreal=%d",f);
    return 0;
}