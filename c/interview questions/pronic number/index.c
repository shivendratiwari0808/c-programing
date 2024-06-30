#include<stdio.h>
int main (){
    int num,i,flag=0;
    printf("enter a number :");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        if(i*(i+1) > num){
            break;
        }
    if (i*(i+1)== num)
    {
        printf("this is %d pronic number \n",num);
        flag = 1;
        break;
    }
    }
    if(!flag){
        printf("this is %d not pronic number",num);
    }
    return 0;
}