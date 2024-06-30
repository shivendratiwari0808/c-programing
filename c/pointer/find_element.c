#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50}, *p=&a[0],i;

    p++; printf("%d\n",*p);
    --p;printf("%d\n",*p);
    p=p+2;printf("%d\n",*p);
    *p++;printf("%d\n",*p);
    --*p;printf("%d\n",*p);
    (*p)++;printf("%d\n",*p);
    printf("elements");
    for(i=0;i<5;i++)
    printf("%4d",a[i]);
    return 0;
}