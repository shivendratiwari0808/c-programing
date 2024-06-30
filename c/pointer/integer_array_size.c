#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*p,i;
    printf("enter array size :");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("enter %d integers ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("elements ");
    for(i=0;i<n;i++)
    {
        printf("%4d",*(p+i));
    }
    free(p);
    p=NULL;
    return 0;
}