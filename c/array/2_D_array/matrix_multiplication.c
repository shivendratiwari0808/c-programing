#include<stdio.h>
int main(){
    int a[2][2]={1,2,3,4},b[2][2]={5,6,7,8},r,c,k,s;
    puts("result elements :");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            for(k=s=0;k<2;k++)
            {
                s=s+a[r][k]*b[k][c];
            }
            printf("%4d",s);
        }
        printf("\n");
    }
    return 0;
}