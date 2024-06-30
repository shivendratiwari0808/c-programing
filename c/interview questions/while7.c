#include<stdio.h>
int main(){
    int a=0;
    while(a++<=5)
    {
        printf("%d\t",a);
    }
    printf("%d",++a);
    return 0;
}



//output 1   2   3   4   5   6   8