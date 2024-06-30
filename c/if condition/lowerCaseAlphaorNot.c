#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("lower case");
    
    
    return 0;
}