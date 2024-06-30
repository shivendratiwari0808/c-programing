#include<stdio.h>
int main(){
    int n=100;
    printf("n value = %d",*&n);
    return 0;
}