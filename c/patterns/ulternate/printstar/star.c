#include<stdio.h>
int main()
{
    int nr,c,r;
    printf("enter the no of row and colums :");
    scanf("%d",&nr);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=r;c++){
            printf("* ");
        }
        
        printf("\n");
    }

return 0;

}