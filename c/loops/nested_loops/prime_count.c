#include<stdio.h>
int main(){
    int n,a,b,rev,r,c,count=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(a=2;a<=n;a++)
    {
        for(b=1,c=0;b<=a;b++)
        {
            if(a%b==0)
            c++;
        }
        if(c==2)
        {
            printf("%4d",a,count++);
        }
    }
    printf("\n%d primes",count);
    return 0;
}