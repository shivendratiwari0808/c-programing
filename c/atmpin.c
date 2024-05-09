#include<stdio.h>
int main()
{
int pin,c=0;
abc:
printf("enter pin no =");
scanf("%4d",&pin);
if(pin==1234)puts("welcome to hdfc atm");
else
{
    c++;
    if(c==3)puts("your card blocked for 24 hours");
    else puts("invaild pin");goto abc:
}
return 0;
}