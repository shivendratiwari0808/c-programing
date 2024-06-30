#include<stdio.h>
int main(){
    int n;
    printf("enter n value :");
    scanf("%4d",&n);
    while (n>=1)
    {
        printf("%4d",n--);

    }
    return 0;
}