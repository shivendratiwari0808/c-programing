#include<stdio.h>
#include<math.h>
int main(){
    int num,rem,total=0,count=1;
    printf("enter the number ");
    scanf("%d",&num);
    int num2=num;
    int rev_num=0;
   while (num > 0) {
        rem=0;
        rem=num%10;
        rev_num = (rev_num * 10) + rem; 
        num = num / 10; 
    } 
    num=rev_num;
    while(num>0){
        rem=0;
        rem=num%10;
        total=total+(pow(rem,count++));
        num=num/10;
    }
    if(total==num2){
        printf("%d is a disarium number",num2);
    }
    else{
        printf("%d is not a disarium number",num2);
    }
    
return 0;    
}