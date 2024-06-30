#include<stdio.h>
#include<ctype.h>
int main (){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(isalpha(ch))
    {
        switch(ch)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': puts("vowel");break;
            default : puts("consonant");
        }
    }
    else if(isdigit(ch)) puts("it is digit");
    else puts("special char");
return 0;
}