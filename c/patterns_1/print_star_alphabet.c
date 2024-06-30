#include<stdio.h>
int main (){
    int nr,nc,r,c,a=1;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        if(c==1 || c==nc || r==1 || r==nr)
        {
            printf("%3d",a++);
        }
        else
        printf("%3c",'*');
        printf("\n");
    }
    return 0;
}