#include<stdio.h>
int main(){
    int a[100],n,i,ele,f=0,occ;
    printf("enter array size between 1-100 :");
    scanf("%d",&n);
    printf("enter %d elemnets :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search :");
    scanf("%d",&ele);
    printf("enter nth occurance :");
    scanf("%d",&occ);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)f++;
        {
            if(f==occ)
            {
                printf("%d in %d cell %d time \n",ele,i+1,occ);
                break;
            }
        }
    }
    if(f==0)
    {
        printf("%d not found ",ele);
    }
    else if(f!=occ)
    {
        printf("%d not found %d time ",ele,occ);
    }
    return 0;
}