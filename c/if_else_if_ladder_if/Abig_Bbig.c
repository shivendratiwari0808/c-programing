#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b,c values :");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c)
    {
        puts("all are equal");
    }
    else if(a>b && a>c)
    {
        printf("a is big");
    }
    else if(a==b && a>c)
    {
        printf("a & b are big");
    }
    else if(b==c && b>a)
    {
        puts("b & c is big");
    }
    else if (a==c && a>b)
    {
        puts("a & c is big");
    }
    else if(b>c)
    {
        printf("b is big");
    }
    else
    {
        puts("c is big");
    }
    return 0;
}