#include<stdio.h>
int main(){
    int a=0;
    while(a<=5)
    {
        printf("%d\t",++a);
    }
    printf("%d",++a);
    return 0;
}