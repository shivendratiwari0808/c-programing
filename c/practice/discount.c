#include<stdio.h>
int main(){
    int id;
    char name[20];
    float qty,price,amount,disc,total;
    printf("enter coustmer id :");
    scanf("%d",&id);
    printf("enter your name :");
    scanf("%s",&name);
    printf("enter quantity :");
    scanf("%f",&qty);
    printf("enter the purchase of rate :");
    scanf("%f",&price);
    amount = qty*price;
    disc= amount*35/100;
    total=amount-disc;

    printf("amount = %.2f,discount = %.2f, total= %.2f",amount,disc,total);

    
    return 0;
}