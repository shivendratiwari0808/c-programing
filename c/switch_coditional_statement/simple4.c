#include<stdio.h>
int main (){
    int a;
    switch (a=0,1)
    {
        case 0: printf("hello");break;
        case 1: printf("hii");break;
        default : printf("bye");
    }
    printf("\na=%d",a);
    return 0;
}