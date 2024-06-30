#include<stdio.h>
int main(){
    int a[2]={1,2},i;
    a[2]=3;
    a[3]=4;
    printf("ELEMENTS");
    for(i=0;i<4;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}