#include<stdio.h>
int main(){
    int a[100],n,i,ele;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to delete :");
    scanf("%d",&ele);
    printf("elements :");
    for(i=0;i<n;i++)
    if(a[i]!=ele)
    {
        printf("%4d",a[i]);
    }
    return 0;
}