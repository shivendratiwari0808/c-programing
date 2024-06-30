#include<stdio.h>
int main(){
    int t,n,i;
    printf("enter no of tables :");
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
        
        for(i=1;i<=10;i++)
        {
            printf("%d * %d = %d\n",t,i,t*i);
        }
        printf("\n");
    }

    return 0;
}