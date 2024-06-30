#include<stdio.h>
int main(){
    int a[100],n,i,j,t;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<=n-i-2;j++){
        if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }}
    } 
    printf("sorted elements");
    for(i=0;i<n;i++)printf("%4d",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>a[0]){
            printf("\n2nd min=%d\n",a[i]);break;

        }
    }
    for(i=n-2;i>=0;i--)if(a[i]<a[n-1]){
        printf("2nd max=%d",a[i]);break;
    }
    return 0;
}