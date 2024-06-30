#include<stdio.h>
int main(){
    int a[4]={9},i;
    a[0]=1;
    a[3]=4;
    printf("elements ");
    for(i=0;i<4;i++)
    {
        printf("%6d",a[i]);
    }
    return 0;
}