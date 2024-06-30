#include<stdio.h>
int main(){
    char s[100];
    int i;
    puts("enter a string  :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {

    }
    printf("length = %d\n",i);
    printf("reverse ");
    while(i)
    {
        putchar(s[--i]);
    }
    return 0;

}