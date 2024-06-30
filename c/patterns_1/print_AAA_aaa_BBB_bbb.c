#include<stdio.h>
int main(){
    int nr,nc,r,c;
    char l='a',u='A';
    printf("enter no of rows and coloumns :");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        if(r%2==0)
        {
            printf("%2c",l);
        }
        else
        {
            printf("%2c",u);
        }
        printf("\n");
        if(r%2==0)l++;else u++;
    }
}