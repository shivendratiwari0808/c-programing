#include<stdio.h>
int main(){
    int a,b,i=1,gcd;
    printf("enter a,b values :");
    scanf("%d %d",&a,&b);
    while(i<=a && i<=b)
    {
    if(a%i==0 && b%i==0)gcd=i;
    i++;
    }
    printf("gcd=%d",gcd);
    
    return 0;
}