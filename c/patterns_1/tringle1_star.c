#include<stdio.h>
int main(){
    int n,r,c,s;
    printf("enter no of rows :");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(s=1;s<=n-r;s++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        if(c==1 || c==r)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
        printf("\n");
    }
    for(r=n-1;r>=1;r--)
    {
        for(s=1;s<=n-r;s++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        if(c==1 || c==r)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
        printf("\n");
    }
}