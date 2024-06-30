#include<stdio.h>
int main(){
    int nr,a=1,b,r,c;
    printf("enter no of rows :");
    scanf("%d",&nr);
    for(r=1;r<=nr;r++)
    {
        b=a+r-1;
        for(c=1;c<=r;c++,a++)
        if(r%2==0)
        {
            printf("%3d",b--);
        }
        else
        {
            printf("%3d",a);
        }
        printf("\n");
    }
    return 0;
}