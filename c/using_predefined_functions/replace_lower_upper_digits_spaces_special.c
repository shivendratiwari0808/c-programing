#include<stdio.h>
#include<ctype.h>
int main(){
    char s[100];
    int i,a,d,spa,spe;
    puts("enter a string :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(islower(s[i]))
        s[i]='@';
        else if(isupper(s[i]))
        s[i]='#';
        else if(isdigit(s[i]))
        s[i]='$';
        else if(isspace(s[i]))
        s[i]='*';
        else
        s[i]='=';
    }
    printf("converted string is %s",s);
    return 0;
}