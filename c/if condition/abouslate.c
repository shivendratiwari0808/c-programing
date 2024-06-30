#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
if(n<0)
n-=n;
printf("abouslate value = %d",n);
return 0;

}