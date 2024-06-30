#include<stdio.h>
int main(){
    long int a,n,m,r,f,s;
    printf("enter the no :");
    scanf("%ld",&n);
    for(a=1;a<=n;a++)
    {
        for(s=0, m=a;m;m=m/10)
        {
            for(r=m%10,f=1;r>1;r--)
            f=f*r;
            s=s+f;
        }
        if(s==a) printf("%8ld",a);
    }
    return 0;
    
}