#include<stdio.h>
int main(){
    int nr,nc,r,c;
    printf("enter the no of rows and colums");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        printf("%2c",96+c);
        printf("\n");
    }
    return 0;
}