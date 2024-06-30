#include<stdio.h>
int main(){
    int a=0;
    switch(a++||a++||a++)
    {
        case 1: puts("hello");break;
        case 2: puts("hii");break;
        default : puts("bye");
    }
    printf("a=%d",a);
    return 0;
}