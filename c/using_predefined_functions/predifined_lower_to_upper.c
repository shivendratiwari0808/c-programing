#include<stdio.h>
#include<ctype.h>
int main(){
    char s[100];
    int i;
    puts("enter a string :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    
        if(islower(s[i]))
        {
        s[i]=toupper(s[i]);
        }
        else 
        {
        s[i]=tolower(s[i]);
        }
    
    printf("converted string is %s",s);
    return 0;
}