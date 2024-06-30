#include<stdio.h>
int main(){
    int a=97,b=98;
    switch(a||b)
    {
        case 97: puts("hello");break;
        case 98: puts("hii");break;
        default : puts("bye");
    }
    return 0;
}