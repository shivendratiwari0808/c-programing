#include<stdio.h>
int main(){
    int nr,a,r,c;
    printf("enter no of rows :");
    scanf("%d",&nr);
    a=nr*(nr+1)/2;
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=r;c++)
        printf("%3d",a--);
        printf("\n");
    }
    return 0;
}