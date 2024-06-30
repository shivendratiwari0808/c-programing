#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(){
    char s[100];
    int i,j;
    puts("enter a string :");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    {
        for(j=0;j<i/2;j++)
        {
            if(tolower(s[j])!=tolower(s[i-j-1]))
            {
                puts("not a palindrmoe");getchar(); return 0;
            }
        }
    }
    printf("palindrome");
    
    return 0;
}