#include<stdio.h>
int main (){
    int nr,nc,c,r;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        if(c%2==0)
        {
            printf("%2c",96+c);
        }
        else
        {
            printf("%2c",64+c);
        }
        printf("\n");
    }
    return 0;
}