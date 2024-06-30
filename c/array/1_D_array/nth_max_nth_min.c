#include<stdio.h>
int main(){
    int a[100],n,i,j,t,max,min;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter nth min, nth max values :");
    scanf("%d %d",&min, &max);
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("soreted elements :");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        min--;
        if(min==1)
        {
            printf("\n min = %d ",a[i]);break;
        }
    }
    for(i=n-2;i>0;i--)
    {
        if(a[i]<a[i+1])
        max--;
        if(max==1)
        {
            printf("max = %d",a[i]);break;
        }
    }
    return 0;
}