#include<stdio.h>
int main(){
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    puts("it is alphabet ");
    else
    puts(" not a alphabet");
    return 0;
}