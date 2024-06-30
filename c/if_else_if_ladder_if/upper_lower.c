#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        puts("lower case char");
    }
    else if(ch>'A' && ch<'Z')
    {
        printf("upper case char");
    }
    else if(ch>'0' && ch<'9')
    {
        printf("digit");
    }
    else if(ch==' ')
    {
        puts("space");
    } 
    else if ("special char");
    return 0;
}