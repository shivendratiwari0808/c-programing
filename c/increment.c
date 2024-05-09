#include<stdio.h>
int main()
{
    int a,b;
   printf("enter a,b values"); scanf("%d%d,&a,&b");
    printf("sum=%d\n",a-(-b));
    printf("sum=%d\n",a- -b);
    printf("sum=%d",a-(~b)-1);
    return 0;
}