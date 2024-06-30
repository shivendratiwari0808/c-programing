#include<stdio.h>
#include<stdlib.h>
int main(){
    char s[20],sp[]="@#$^*=",ch;
    int i,n;
    
    while(1)
    {
        randomize();
        for(i=0;i<5;i++)
    {
    n=random(4);
    if(n==0) s[i]=97+random(26);
    else if(n==1)s[i]=65+random(26);
    else if(n==2)s[i]=48+random(10);
    else s[i]=sp[random(6)];
    }
    s[i]='\0';
    printf("captcha:%s\n",s);
    printf("refresh captcha [y/n]");
    {
        scanf("%c",&ch);
    }
    if(ch=='n' || ch=='N')break;

    }
    return 0;
}