#include<stdio.h>
int main(){
    int a,b;
    printf("enter first values :");
    scanf("%d",&a);
    printf("enter second values :");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is big\n",a);
    }
    else{
        printf("%d is big",b);
    }
    return 0;
}