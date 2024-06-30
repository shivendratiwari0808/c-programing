#include<stdio.h>
int main(){
    char s[100],*p;
    p=s;
    printf("enter a string  :");
    gets(s);
    for(; *p;p++)
    {
        puts(p);
    }
    return 0;
}