#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    puts("lower case char");
    return 0;
}