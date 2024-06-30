#include<stdio.h>
int main(){
    char s[100];
    int i,a,d,spa,spe;
    puts("enter a string :");
    gets(s);
    for(a=d=spa=spe=i=0; s[i]!='\0';i++)
    {
        if(s[i]>'a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            a++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            d++;
        }
        else if(s[i]==' ')
        {
            spa++;
        }
        else
        {
            spe++;
        }
    }
    printf("alphabet =%d, digit= %d, spaces = %d, special char =%d",a,d,spa,spe);
    return 0;
}