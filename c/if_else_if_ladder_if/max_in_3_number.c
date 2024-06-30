#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b,c values :");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c)
    {
        printf("all are equal");
    }
    else if(a>b && a>c)
    {
        printf("a is big");
    }
    else if (b>c)
    {
        printf("b is big");
    }
    return 0;
}