#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if(!(ch>=97 && ch>=122 || ch>=65 && ch>=90 || ch>='0' && ch<='9'))
    puts("it is special char ");
    else
    puts("not a special char");
    return 0;
}