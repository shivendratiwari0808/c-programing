#include<stdio.h>
int main(){
    int a,b;
    printf("enter a,b values :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("a is big");
    }
    else if(b>a)
    {
        printf("b is big ");
    }
    else{
        puts("both are equal");
    }
    return 0;
}