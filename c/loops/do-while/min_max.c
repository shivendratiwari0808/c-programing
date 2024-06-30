#include<stdio.h>
int main(){
    long n;
    int r,max=-9,min=9;
    printf("enter n value :");
    scanf("%ld",&n);
    do
    {
        r=n%10;
        if(max<r)max=r;
        if(min>r)min=r;
        n=n/10;
    }
    while(n!=0);
    printf("max = %d, min = %d",max,min);
    return 0;
}