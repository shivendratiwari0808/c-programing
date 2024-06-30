#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j;
    puts("enter a string :");
    gets(s1);
    for(i=0;s1[i]!='\0';i++);//strlen
    {
        for(s2[i--]='\0',j=0;i>=0;i--,j++)
        {
            s2[j]=s1[i];
        }
    }
    for(i=0;s1[i]!='\0';i++)
    {
        if(tolower(s1[i])!=tolower(s2[i]))
        {
            puts("not a palindrome");getch();return;
        }
    }
    printf("palindrome");
    return 0;
}