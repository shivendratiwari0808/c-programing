#include<stdio.h>
int main(){
    char s[100];
    puts("enter a string  :");
    scanf("%[^0-9]",s);
    puts("you entered ");
    puts(s);
    return 0;
}