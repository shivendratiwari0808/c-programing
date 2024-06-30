#include<stdio.h>
void show(int (*a)[3])or a[2][3] or a[][3]
{
    a[0][0]=10;a[1][2]=60;
}
void main()
{
    int a[2][3]={1,2,3,4,5,6};
    show(a);
    printf("a[0][0]=%d, a[1][2]=%d",a[0][0],a[1][2]);
    
}