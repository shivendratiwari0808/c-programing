#include<stdio.h>
int main(){
    int n,m,r,f,s=0;
    printf("enter the no :");
    scanf("%d",&n);
    m=n;
    while(m)
    {
        for(r=m%10,f=1; r>1;r--)
        f=f*r;
        s=s+f;
        m=m/10;
    }
    puts(s==n?"strong no" : "not a strong no");
    return 0;
}