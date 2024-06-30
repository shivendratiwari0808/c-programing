#include<stdio.h>
int main(){
    int a[3]={10,20,30};
    printf("no of cells =%d\n",sizeof(a)/sizeof(int));
    printf("no of cells =%d\n",sizeof(a)/sizeof(a[0]));
    printf("no of bytes =%d\n",sizeof(a));

    return 0;
}