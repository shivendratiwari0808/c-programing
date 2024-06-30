#include<stdio.h>
int main(){
    int id;
    char name[20];
    float qty,price,disc,total,amount;
    printf("enter coustmer id :");
    scanf("%d",&id);
    printf("enter your name :");
    scanf("%s",&name);
    printf("enter product quantity :");
    scanf("%f",&qty);
    printf("enter purchase rate :");
    scanf("%f",&price);
    amount = qty*price;
    printf("amount = %.2f\n",amount);
    printf("enter discount percentage :");
    scanf("%f",&disc);
    disc=amount * disc/100;
    total =amount-disc;
    printf("discount = %.2f, total = %.2f",disc,total);
    return 0;
}