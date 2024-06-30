#include<stdio.h>
int main(){
    int a;
    switch(a=printf("i\t"),printf("am\t"))
    {
        case 1: puts("indian");break;
        case 2: puts("india");break;
        case 3: puts("hidustani");break;
        default : puts("human being");
    }
    printf("a=%d",a);
    return 0;
}