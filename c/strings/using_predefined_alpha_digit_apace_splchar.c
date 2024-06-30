#include<stdio.h>
#include<ctype.h>
int main(){
    char s[100];
    int i,a,d,spa,spe;
    puts("enter a string :");
    gets(s);
    for(a=d=spa=spe=i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i]))
        a++;
        else if(isdigit(s[i]))
        d++;
        else if(isspace(s[i]))
        spa++;
        else
        spe++;
    }
    printf("alphabets = %d, digit = %d, spaces = %d, special char = %d",a,d,spa,spe);
    return 0;
}