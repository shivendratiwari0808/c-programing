#include<stdio.h>
void max(int a, int b)
{
    puts(a>b?"a is big" : b>a?"b is big" : "both are equal");
}
void main(){
    int a,b;
    printf("enter a,b values :");
    scanf("%d %d",&a,&b);
    max(a,b);
}