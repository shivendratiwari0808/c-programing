#include<stdio.h>
int main(){
    long n;
    int c,d,f=0;
    printf("enter the no :");
    scanf("%ld",&n);
    printf("enter the digit to search :");
    scanf("%d",&d);
    printf("in ");
    c=printf("%ld",n);
    while(n!=0)
    {
        if(n%10==d)
        {
            printf("%d in %d position\n",d,c,f=1);
        }
        c--;
        n=n/10;
    }
    if(f==0)
    printf("%d not found ",d);
    return 0;
}