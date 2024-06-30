#include<stdio.h>
int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    ch+=32;
    if(ch>='a' && ch<='z')
    {
        switch (ch)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':  puts("vowel");break;
            default : puts("consonant");
        }
    }
    else
    {
        puts("not a alphabet ");
    }
    return 0;
}