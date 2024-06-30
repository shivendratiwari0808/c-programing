#include<stdio.h>
int main(){
    int a[10][10],nr,nc,r,c;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    printf("enter %d elements ",nr*nc);
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    puts("elements");
    for(c=0;c<nc;c++)
    {
        for(r=0;r<nr;r++)
        {
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
    return 0;
}