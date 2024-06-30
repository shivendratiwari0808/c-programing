#include<stdio.h>
int main(){
    int a[100],n,i,max,min;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        max=min=a[0];
    }
    for(i=1;i<n;i++)
    {
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    printf("max =%d, min =%d",max,min);
    return 0;
}