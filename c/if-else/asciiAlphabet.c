#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(ch>=97 && ch>=122 || ch>=65 && ch<=90)
    puts("it is alphabet");
    else
    puts("not a alphabet");
    return 0;
}