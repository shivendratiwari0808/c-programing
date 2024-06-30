#include<stdio.h>
int main(){
    int a[10][10],nr,r,c,rs,cs;
    printf("enter no of rows :");
    scanf("%d",&nr);
    printf("enter %d elements :",nr*nr);
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nr;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    for(r=0;r<nr;r++)
    {
        for(c=rs=cs=0;c<nr;c++)
        {
            rs=rs+a[r][c];
            cs=cs+a[c][r];
        }
        a[r][c]=rs;a[c][r]=cs;
    }
    for(r=0;r<=nr;r++)
    {
        for(c=0;c<=nr;c++)
        {
            if(r==nr && c== nr);
        else
        printf("%4d",a[r][c]);
        }
        printf("\n");
    }
    return 0;
}