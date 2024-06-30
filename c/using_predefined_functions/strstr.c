#include<stdio.h>
#include<string.h>
int main(){
    char s[]="abcdef";
    printf("%s addr %u\n",s,s);
    printf("c addr %u\n",strstr(s,"c"));
    printf("c addr %u\n",strstr(s,"C"));
    printf("c addr %s\n",strstr(s,"c"));
    printf("c addr %s\n",strstr(s,"C"));
    printf("c is %d char\n",strstr(s,"c")-s+1);
    return 0;
}