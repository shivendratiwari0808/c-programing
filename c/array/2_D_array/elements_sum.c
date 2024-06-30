#include<stdio.h>
int main(){
    int a[10][10],n,r,c,s=0;
    printf("enter no of rows :");
    scanf("%d",&n);
    printf("enter %d elements :\n",n*n);
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            scanf("%d",&a[r][c]);
            if(r==0 || r==n-1 || r+c==n-1)
            s+=a[r][c];
        }
    }
    printf("elements sum = %d",s);
    return 0;
}