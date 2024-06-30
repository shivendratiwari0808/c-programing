#include<stdio.h>
int main(){
int min,max,i,sqr,flag,num;
printf("enter min range value :");
scanf("%d",&min);
printf("enter max range value :");
scanf("%d",&max);
for(i=min;i<=max;i++){
    num=i;
    sqr = num*num;
    flag =0;
    while(num>0)
    {
        if(num%10!=sqr%10)
        {
            flag=1;
            break;
        }
        num=num/10;
        sqr=sqr/10;
    }
    if(flag==0)
    printf("%d ",i);
}
return 0;
}