#include<stdio.h>
int main (){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    switch (n%2)
    {
        case 0: puts("even");break;
        default : puts("odd");
    }
    return 0;

}