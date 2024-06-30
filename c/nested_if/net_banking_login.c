#include<stdio.h>
#include<string.h>
int main(){
    char user[20],pass[20],cap[10];
    printf("enter user name :");
    scanf("%s",&user);
    printf("enter password :");
    scanf("%s",&pass);
    printf("enter captcha code :");
    scanf("%s",&cap);
    if(strcmp(user,"shivendra")==0 && strcmp(pass,"tiwari")==0 && strcmp(cap,"1234")==0)
    {
        puts("welcome to sbi net banking");
    }
    else
    {
        puts("invaild username/password/captcha");
    }
    return 0;
}