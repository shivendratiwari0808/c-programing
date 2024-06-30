#include<stdio.h>
int main(){
    char s[100];
    puts("enter your name :");
    scanf("%[^\n]",s);
    printf("your name is :");
    puts(s);
    return 0;
}