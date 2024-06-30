#include<stdio.h>
int main(){
    int n,a,b,r,s,count=0;
    printf("enter the starting and ending no's :");
    scanf("%d %d",&a,&n);
    if(a>n)
    {
        int t=a;
        a=n;
        n=t;
    }
    for( ;a<=n;a++)
    {
        for(b=a;b>9;)
        {
            for(s=0;b!=0;b=b/10) s=s+b%10;
            b=s;
        }
        if(b==1)
        printf("%8d",a,count++);
    }
    printf("\n%d magic no 's ",count);
    return 0;
}