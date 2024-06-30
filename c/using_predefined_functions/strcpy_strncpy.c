#include<stdio.h>
#include<string.h>
int main(){
    char s1[10]="hyderabad",s2[10],s3[10];
    strcpy(s2,s1);
    strncpy(s3,s1,3);
    s3[3]='\0';
    puts(s2);
    puts(s3);
    return 0;
}