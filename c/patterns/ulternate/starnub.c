#include <stdio.h>
#include <conio.h>
int main()
{
    int nc,nr,r,c,a=1;
    printf("Enter the number:");
    scanf("%d%d",&nr,&nc);
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            if(c==1 || c==nc || r==1 || r==nr){
            printf("%3d",a++);
            }
            else{
                printf("%3c",'*');
            }
        }
        printf("\n");
    }
    return 0;
}