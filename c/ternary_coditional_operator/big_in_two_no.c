#include<stdio.h>
int main(){
    int a,b,big;
    printf("enter a,b values :");
    scanf("%d%d",&a,&b);
    printf("%d is big ",a>b?a:b);
    puts(a>b?"a is big": "b is big");
    a>b?puts("a is big"):puts("b is big");
    big=a>b?a:b;
    printf("%d is big \n",big);
    puts(a>b?"a is big" : b>a?"b is big" : "both are equal");

    return 0;
}