#include<stdio.h>
int main(){
    int a=2;
    a=a++ + ++a + a++;
    printf("%d ",a);
    a=2;
    printf("%d",a++ + ++a);
    return 0;
}