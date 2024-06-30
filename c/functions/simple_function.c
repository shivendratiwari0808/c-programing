#include<stdio.h>
int sqr(int); //function declarition or prototype
int main(){   //caller
    int a,s;
    printf("enter a no :");
    scanf("%d",&a);
    s=sqr(a); //fun calling a is actual parameter
    printf("%d SQR is %d",a,s);
}
int sqr(int f)  //fun defination,f is formal parameter
{
    return f*f;
}
