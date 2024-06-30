#include<stdio.h>
int main(){
    int nr,nc,r,c,e=2,o=1;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        if(r%2==0)
        {
            printf("%3d",e);
            e+=2;
        }
        else
        {
            printf("%3d",o);
            o+=2;
        }
        printf("\n");
    }
    return 0;
}