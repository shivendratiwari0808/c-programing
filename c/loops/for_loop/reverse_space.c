#include<stdio.h>
int main(){
    long n;
    printf("enter the no :");
    scanf("%ld",&n);
    if(n<0) 
    {
        printf("-",n=-n);
    }
    for( ;n!=0;n/=100)
    {
        {
        if(n>9 && n%100<10)
        
            printf("0");
            
        }
        printf("%d  ",n%100);
    }
    return 0;
}