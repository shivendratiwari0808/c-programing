#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    printf("enter the string :");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    if(stricmp(s1,s2)==0)
    {
        puts("palindrome");
    }
    else
    {
        puts("not a palindrome");
    }
    return 0;
}