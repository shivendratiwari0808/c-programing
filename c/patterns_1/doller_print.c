#include<stdio.h>
int main(){
    int n,r,c,s;
    printf("enter no of rows :");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        if((c+r)%2==0)
        {
            printf("$ ");
        }
        else
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}