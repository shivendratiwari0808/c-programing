#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("enter size between 1-100 only :");
    scanf("%d",&n);
    if(n<1 || n>100)puts("array size 1-100 only ");
    else 
    {
        printf("enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ELEMENTS ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    }
    return 0;
}