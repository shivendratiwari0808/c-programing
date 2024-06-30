#include<stdio.h>
int main (){
    int a[16]={0},n,i;
    printf("enter a no :");
    scanf("%d",&n);
    for(i=0;n!=0;i++,n=n/16)
    {
        a[i]=n%16;
    }
    printf("hexadecimal code :");
    for(i=15;i>=0;i--)
    {
        if(a[i]>=10)
        {
            printf("%2c",87+a[i]);
        }
        else
        {
            printf("%2d",a[i]);
        }

    }
    return 0;
}