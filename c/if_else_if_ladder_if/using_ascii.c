#include<stdio.h>
int main(){
    char ch;
    printf("enter  a character :");
    scanf("%c",&ch);
    if(ch>97 && ch<122)
    {
        puts("lower case char");
    }
    else if(ch>65 && ch>90)
    {
        printf("upper case char");
    }
    else if(ch>48 && ch<=57)
    {
        printf("digit");
    }
    else if(ch==32)
    {
        puts("space"); 
    }
    else
    {
       printf("special char");
    } 
    return 0;
}