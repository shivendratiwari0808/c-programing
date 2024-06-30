#include<stdio.h>
int main(){
    int nr,nc,r,c;
    char ch;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        ch=64+nc;
        for(c=1;c<=nc;c++)
        if(r%2==0)
        {
            printf("%2c",ch--);
        }
        else
        {
            printf("%2c",64+c);
        }
        printf("\n");
    }
    return 0;
}