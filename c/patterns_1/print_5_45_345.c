#include<stdio.h>
int main(){
int n,r,c;
printf("enter no of rows ");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
    for(c=1;c<=n;c++)
    if(c<=n-r)
    {
        printf(" ");
    }
    else
    {
        printf("%d",c);
    }
    printf("\n");
}
return 0;
}