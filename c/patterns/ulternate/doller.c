#include<stdio.h>
int main(){
    int n,c,r,s;
    printf("enter the row number");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        if((c+r)%2==0)printf("$ ");
        else printf("* ");
        printf("\n");
    }
    return 0;
}