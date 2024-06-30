#include<stdio.h>
int main () {
    int min,max,i,j,temp,count=0,rev=0,r=0,t;
    printf("enter min range value :");
    scanf("%d",&min);
    printf("enter max range value :");
    scanf("%d",&max);
    for(i=min;i<=max;i++){
        temp = i;
        count = 0;
        for(j=1;j<=temp;j++){
            if(temp%j==0)
            count++;
        }
        if(count==2){
            t=temp;
            rev=0;
            while(t!=0){
                r=t%10;
                rev=rev * 10+r;
                t=t/10;
            }
            count=0;
            for(j=1;j<=rev;j++){
                if(rev%j==0)
                count++;
            }
            if(count ==2)
            printf("%d ",temp);
        }

    }
    return 0;

}