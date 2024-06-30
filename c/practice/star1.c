#include<stdio.h>
int main()
{
    int nc,nr,r,c,a=1;
    printf("enter the rows and colums ");
    scanf("%d %d",&nr,&nc);
    for (r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
    printf("%3d",a++);
    printf("\n");
    }

    return 0;
}