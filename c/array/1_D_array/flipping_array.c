#include<stdio.h>
int main(){
    int a[100],n,i,t;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    printf("flipped elements ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}