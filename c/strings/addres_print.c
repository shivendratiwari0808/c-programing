#include<stdio.h>
int main(){
    char s[100];
    puts("enter your address :");
    scanf("%[^.]",s);
    puts("your addr is :");
    puts(s);
    return 0;
}