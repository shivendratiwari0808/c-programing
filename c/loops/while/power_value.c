#include<stdio.h>
int main(){
    int b,p;
    long r=1;
    printf("enter base and power values :");
    scanf("%d %d",&b,&p);
    while(p>=1)
    {
        r=r*b;
        p--;
    }
    printf("power = %ld",r);
    return 0;
}