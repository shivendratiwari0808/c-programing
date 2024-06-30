#include<stdio.h>
int main(){
    int nr,a,r,c;
    printf("enter no of rows :");
    scanf("%d",&nr);
    a=nr*(nr+1)/2;
    for(r=nr;r>=1;r--)
    {
        for(c=r;c>=1;c--)
        {
            printf("%3d",c);
        }
        printf("\n");
    }
    return 0;
}
