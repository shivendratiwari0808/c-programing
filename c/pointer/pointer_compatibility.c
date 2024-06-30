#include<stdio.h>
int main(){
    int a=100;
    float *b=&a;
    printf("a=%d",*b);
    return 0;
}