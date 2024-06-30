#include<stdio.h>
int main(){
    int a;
    switch (a=(0,1,2))
    {
        case 0: puts("hello");break;
        case 1: puts("hii");break;
        default:puts("bye");
    }
    printf("a=%d",a);
    return 0;

}