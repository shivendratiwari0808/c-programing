#include<stdio.h>
int main(){
    int nr,nc,r,c,a;
    printf("enter no of rows and colums :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(a=nc, c=1;c<=nc;c++)
        if(r%2==0){
            printf("%3d",a--);
        }
        else
        {
            printf("%3d",c);
        }
        printf("\n");
    }
    return 0;
}