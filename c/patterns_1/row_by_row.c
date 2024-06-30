#include<stdio.h>
int main(){
    int nr,nc,r,c,a;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(a=r, c=1;c<=nc;c++)
        printf("%3d",a++);
        printf("\n");
    }
    return 0;
}