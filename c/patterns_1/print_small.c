#include<stdio.h>
int main (){
    int nr,nc,r,c;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        printf("%2c",96+c);
        printf("\n");
    }
    return 0;
}