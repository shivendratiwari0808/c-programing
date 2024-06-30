#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50},*p=&a[0],i;
    printf("p value = %u\n",p);
    p[1]++;
    printf("p value =%u\n",p);
    printf("p[1] value = %d\n",p[1]);
    p++;
    printf("p value = %u\n",p);
    printf("p[0] value = %u\n",p[0]);
    printf("p[1] value = %d",p[1]);
    return 0;
}