#include<stdio.h>
#include<string.h>
int main(){
    char user[20],pass[20],cap[10];
    printf("enter user id :");
    scanf("%s",&user);
    printf("enter password :");
    scanf("%s",&pass);
    printf("enter captcha code :");
    scanf("%s",&cap);
    if(strcmp(user,"shivendra")==0)
    {
        if(strcmp(pass,"indian")==0)
        {
            if(strcmp(cap,"hyd-1")==0)
            {
                puts("welcome to irctc");
            }
            else{
                puts("invaild password");
            }
        }
        else{
            puts("invaild password");
        }
    }
    else
    {
        puts("invaild username");
    }
    return 0;

}