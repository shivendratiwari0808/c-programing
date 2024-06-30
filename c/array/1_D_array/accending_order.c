#include<stdio.h>
int main(){
    int a[100],n,i,j,t;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("sorted elements :");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}