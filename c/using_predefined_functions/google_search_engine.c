#include<stdio.h>
#include<string.h>
int main(){
    char s[5][100],s2[100];
    int i;
    puts("enter 5 strings :");
    for(i=0;i<5;i++)
    {
        gets(s[i]);
    }
    printf("enter search string :");
    gets(s2);
    puts("matching strings ");
    puts("-------------------------------");
    for(i=0;i<5;i++)
    {
        if(strstr(s[i],s2)!=0)
        {
            puts(s[i]);
        }
    }
    return 0;
}