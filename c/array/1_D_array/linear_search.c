#include<stdio.h>
int main(){
    int a[100],n,i,ele,f=0;
    printf("enter aaray size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search :");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("%d in %d cell \n",ele,i+1,f=1);
        }

    }
    if(f==0)
    {
        printf("%d not found ",ele);
    }
    return 0;
}