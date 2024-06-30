#include<stdio.h>
int main(){
    int b,p,t;
    long r=1;
    printf("enter base and power values :");
    scanf("%d %d",&b,&p);
    t=p;
    if(p<=0)p=-p;
    while(p>=1)
    {
        r=r*b;
        p--;
    }
    if(t>=0)printf("power = %ld",r);
    else
    printf("power = %.3f",1.0/r);
    return 0;
}