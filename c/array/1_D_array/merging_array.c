#include<stdio.h>
int main(){
    int a[100],b[100],s1,s2,i,j,k;
    printf("enter a,b array sizes between 1-100 :");
    scanf("%d %d",&s1,&s2);
    printf("enter %d elements for a array :",s1);
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter %d elements for b array :",s2);
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=s1,j=0;j<s2;i++,j++)a[i]=b[j];
    {
    printf("elements :");
    }
    for(i=0;i<s1+s2;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}