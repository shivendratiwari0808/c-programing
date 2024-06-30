#include<stdio.h>
int main(){
    float a[100],s=0;
    int n,i;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        s+=a[i];
    }
    printf("sum = %.2f ,avg =%.2f",s,s/n);
    return 0;
}