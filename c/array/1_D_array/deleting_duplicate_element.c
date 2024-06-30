#include<stdio.h>
int main(){
    int a[100],n,i,j,k;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(n--,k=j;k<n;k++)a[k]=a[k+1];j--;
            }
        }
    }
    printf("elements :");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}