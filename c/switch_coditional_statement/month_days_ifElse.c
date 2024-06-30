#include<stdio.h>
int main(){
    int n;
    printf("enter month between (1-12) :");
    scanf("%d",&n);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)puts("31days");
    else if (n==2) puts("28/29 days");
    else if (n==4||n==6||n==9||n==11) puts("30days");
    else puts("invaild month no");
    return 0;
}