#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j;
    puts("enter first name :");
    gets(s1);
    puts("enter second name :");
    gets(s2);
    for(i=0;s1[i]!='\0';i++);//strlen
    
        for(s1[i++]=' ',j=0;s2[j]!='\0';i++,j++)s1[i]=s2[j];
        s1[i]='\0';
    printf("your name is %s",s1);
    return 0;
}