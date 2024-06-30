#include<stdio.h>
int main(){
    int a=0,b=1,c=2;
    if(a--,b++)
    a=10;
    b=20;
    c=a+b;
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
    
}