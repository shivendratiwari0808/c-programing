#include<stdio.h>
int main(){
    int nr,nc,r,c;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {   
        char l='a',u='A';
        for(c=1;c<=nc;c++)
        if(c%2==0)
        {
            printf("%2c",l++);
        }
        else
        {
            printf("%2c",u++);
        }
        printf("\n");
    }
    return 0;
}