#include<stdio.h>
int main(){
int num;
printf("enter a number ");
scanf("%d",&num);
if(num%11==0&&num%5==0)
{
    printf("%d is divisible by 11 and 5",num);
    return 0;
}
printf("%d is not divisible by 11 and 5",num);
return 0;
}