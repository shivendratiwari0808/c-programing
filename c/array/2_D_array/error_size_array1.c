#include<stdio.h>
int main(){
    int a[][3]={1},r,c;
    printf("elements");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%4d",a[r][c]);
        }
        printf("\n");
    }
    return 0;
}