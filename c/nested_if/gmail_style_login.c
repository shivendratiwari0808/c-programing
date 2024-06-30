#include <stdio.h>
#include <string.h>
int main()
{
    char user[20], pass[20], cap[10];
    printf("enter user name :");
    scanf("%s", &user);
    if (strcmp(user, "shivendra") == 0)
    {
        printf("enter password :");
        scanf("%s", &pass);
        if (strcmp(pass, "indian") == 0)
        {
            printf("enter captcha code :");
            scanf("%s", &cap);
            if (strcmp(cap, "hyd-1") == 0)
            {
                puts("welcome to gmail");
            }
            else
            {
                puts("invaild captcha");
            }
        }
        else
        {
            puts("invaild password");
        }
    }
    else
    {
        puts("invaild username");
    }

    return 0;
}