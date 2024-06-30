#include<stdio.h>
int main(){
    int a[10][10],nr,nc,r,c,e,o,z;
    printf("enter no of rows and columns :");
    scanf("%d %d",&nr,&nc);
    printf("enter %d elements :",nr*nc);
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            scanf("%d",&a[r][c]);
        }
    }
    puts("\teven\todd\tzero");
    puts("**********************************");
    for(r=0;r<nr;r++)
    {
        for(c=e=o=z=0;c<nc;c++)
        {
            if(a[r][c]==0)
            z++;
        else if
            (a[r][c]%2==0)
            e++;
        
        else
        
            o++;
        }
        printf("%d-row\t%d\t%d\t%d\n",r+1,e,o,z);

    }
    return 0;
}