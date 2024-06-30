#include<stdio.h>
int main(){
    int a[16]={0},n,i;
    printf("enter a no :");
    scanf("%d",&n);
    for(i=0;n!=0;i++,n=n/8)
    {
        a[i]=n%8;
    }
    printf("ocatal code ");
    for(i=15;i>=0;i--)
    {
        printf("%2d",a[i]);
    }
    return 0;
}