#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        int t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("elements in reverse order ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}