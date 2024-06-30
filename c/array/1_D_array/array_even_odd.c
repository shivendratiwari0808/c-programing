#include<stdio.h>
int main(){
    int a[100],n,i,e,o,z;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(e=o=z=i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a[i]==0?z++:a[i]%2==0?e++:o++;
    }
    printf("even = %d,odd = %d, zero = %d",e,o,z);
    return 0;

}