#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("enter a string :");
    gets(s);
    printf("length=%d\n",strlen(s));
    printf("reverse %s\n",strrev(s));
    printf("lower case %s\n",strlwr(s));
    printf("upper case %s",strupr(s));

    return 0;
}