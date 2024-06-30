#include<stdio.h>
int main (){
    int a[4]={1>2,2>1,2%3,4/0};
    int i;
    printf("elements ");
    for(i=0;i<4;i++)
    {
        printf("%6d",a[i]);
    }
    return 0;
}



//division by zero in function main