#include<stdio.h>
int main(){
    int n,r,c,a,s;
    printf("enter no of rows :");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(s=1;s<=n-r;s++)printf("   ");
        for(a=n,c=1;c<=r;c++,a++)printf("%3d",a);
        for(a=a-2;a>=n;a--)printf("%3d",a);
        printf("\n");
    }
    return 0;
}