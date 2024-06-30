#include<stdio.h>
int main(){
    int n,*p=&n;
    printf("enter a no :");
    scanf("%d",&n);
    puts(n>0?"+ve" : n<0?"-ve" : "zero");
    puts(*p>0?"+ve" : *p<0?"-ve" : "zero");
    return 0;
}