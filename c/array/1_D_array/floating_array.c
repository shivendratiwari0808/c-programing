#include<stdio.h>
int main(){
    float a[4]={1.1,2.2,3.3,4.4};
    int i;
    printf("elements ");
    for(i=0;i<4;i++)
    {
        printf("%.2f",a[i]);
    }
    return 0;
}