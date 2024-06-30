#include<stdio.h>
int main (){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    ch+=32;
    if(ch>='a' && ch<='z')
    {
        switch (ch)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u': puts("vowel");break;
            default : puts("consonant");
        }
    }
    else if (ch>='0' && ch<='9') puts("it is digit");
    else puts("special chracter");
    return 0;
}