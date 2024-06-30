#include<stdio.h>
int main(){
    int n,i=2;
    printf("enter n value :");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%4d",i);
        i+=2;
    }
    
    return 0;
}