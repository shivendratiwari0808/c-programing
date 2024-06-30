#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0;
    printf("enter the number :");
    scanf("%d",&num);
    while((num!=1)&&(num!=4)){
        while (num>0)
        {
            sum = sum + ((num%10)*(num%10));
            num = num/10;
        }
        num = sum;
        sum = 0;    
    }
    if(num == 1){
        printf("happy number");
    }
    else
    {
        printf("unhappy number");
    }
    return 0;
}