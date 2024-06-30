#include<stdio.h>
int main(){
    int a=10, *p=&a,*q=p;
    puts(p==q?"equal" : "not equal");
return 0;
}