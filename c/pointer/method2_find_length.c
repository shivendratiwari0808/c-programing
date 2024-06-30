#include<stdio.h>
int main(){
    char s[100],*p;
    p=s; //p=&s[0];
    printf("enter a string :");
    gets(s);
    for(; *p; p++);
    printf("length = %d",p-s);
    return 0;
}