#include<stdio.h>
int main()
{
int n,first,last;
printf("enter the number");
scanf("%d",&n);
last=n%10;
while(n>=10)
{
    n=n/10;
}
first=n;
printf("first digit %d\n last digit %d",first,last);
return 0;
}