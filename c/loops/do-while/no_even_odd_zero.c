#include<stdio.h>
int main(){
    long n;
    int r,e,o,z;
    e=o=z=0;
    printf("enter n value :");
    scanf("%ld",&n);
    while(n!=0)
    {
        r=n%10;
        if(r==0)z++;
        else if (r%2==0)e++;
        else
        o++;
        n=n/10;
        
    }
    printf("even =%d, odd=%d, zero=%d",e,o,z);
    return 0;
}