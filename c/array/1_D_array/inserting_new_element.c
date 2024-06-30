#include<stdio.h>
int main(){
    int a[100],n,i,ele,pos;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter new element and position :");
    scanf("%d %d",&ele,&pos);
    if(pos<1 || pos>n+1)
    {
        printf("position 1 to %d only :",n+1);
    }
    else
    {
        for(i=n;i>=pos;i--)
        a[i]=a[i-1];
        a[i]=ele;
        printf("elements ");
    }
    for(i=0;i<=n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;

}