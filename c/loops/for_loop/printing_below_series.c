#include<stdio.h>
int main (){
    int n,i,s=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d+",i,s=s-i);
        }
        else
        {
            printf("%d-",i,s=s+i);
        }
    }
    printf("\b=%d",s);
    return 0;
}