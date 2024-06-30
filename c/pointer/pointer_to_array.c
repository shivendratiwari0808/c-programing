#include<stdio.h>
int main(){
    int a[3]={10,15,18},*p,i;
    p=a;
    printf("elements");
    for(i=0;i<3;i++)
    {
        printf("%4d",*(i+p));
    }
    return 0;
}