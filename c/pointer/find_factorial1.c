#include<stdio.h>
int main(){
    int n,f=1, *p=&n;
    printf("enter n value :");
    scanf("%d",&n);
    while(*p>1)
    {
        f=f* *p;
        --*p;
    }
    printf("factorial = %d",f);
    return 0;
}