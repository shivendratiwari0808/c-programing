#include<stdio.h>
int main(){
    char user[20],pass[20],ch;
    int i=0;
    printf("enter user name :");
    scanf("%s",user);
    printf("enter password :");
    while((ch=getch())!=13)
    {
        printf("*");
        pass[i]=ch;
        i++;
    }
    pass[i]='\0';
    printf("\nshow password [y/n]");scanf("%c",&ch);
    if(ch=='y' || ch=='Y')printf("your password %s",pass);
    else printf("pass protected");

    return 0;
}