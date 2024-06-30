#include<stdio.h>
int main(){
    if(printf("hello")==sizeof("hello"))
    {
        printf("a");
        printf("b");
    }
    {
        printf("c");
    }
    return 0;
}