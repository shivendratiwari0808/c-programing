#include<stdio.h>
int main(){
    int a=0;
    switch (a++)
    {
    case 0: printf("hello");break;
    case 1: printf("hi");break;
    default : printf("bye");
    }
    return 0;
}