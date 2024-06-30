#include<stdio.h>
int main(){
    char name [30];
    float basic=10000,da=basic*65.5/100,sales,bonus,comm,gross;
    printf("enter sales person name :");
    scanf("%s",name);
    printf("enter sales amount :");
    scanf("%f",&sales);
    if(sales>=100000){
        bonus=10000;
        comm=sales*10/100;
    }
    else
    {
        bonus=2000;
        comm=sales*5/100;
    }
    gross=basic+da+bonus+comm;
    printf("%s basic = %.2f, da = %.2f, bonus = %.2f, comm = %.2f,and gross = %.2f",name,basic,da,bonus,comm,gross);
return 0;
}