#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements in reverse order :");
    for(i=n-1;i>=0;i--)
    printf("%4d",a[i]);
    return 0;
}