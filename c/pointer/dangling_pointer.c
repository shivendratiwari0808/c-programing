#include<stdio.h>
int main(){
    int *p;   //bad pointer
    {
        int a=100; //local varaible
        p=&a;  //initialazation
        printf("a=%d\n",*p);
    }
    printf("a=%d\n",*p);
    p=NULL;
    printf("a=%d",*p);
    return 0;
}
