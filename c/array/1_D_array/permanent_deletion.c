#include<stdio.h>
int main(){
    int a[100],n,i,j,ele,f=0;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to delete :");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            for(n--,j=i,f=1;j<n;j++)a[j]=a[j+1];i--;
        }
    }
    if(f==0) printf("%d not found",ele);
    else
    {
        printf("elements :");for(i=0;i<n;i++)printf("%4d",a[i]);
    }
    return 0;
}