#include<stdio.h>
int main (){
    int qty,op;
    float amt=0;
    start:
    puts("********************************************");
    puts("\t\t\t hotel balaji ");
    puts("\t\t\t ameerpet-hyd");
    puts("*********************************************");
    puts("\t\t\t M E N U ");
    puts("**********************************************");
    puts("\t\t\t 1. tea/butter-milk-10/-");
    puts("\t\t\t 2. coffie / boost/lemon tea / water bottle-20/-");
    puts("\t\t\t 3. idly/bonda/upma/poha/plain-dosa-30/-");
    puts("\t\t\t 4. wada/onion/masala/poori/sambar idly-40/-");
    puts("\t\t\t 5. veg biryani/curd rice/paneer dosa -50/-");
    puts("\t\t\t 6. bill");
    puts("\t\t\t 7. cancel");
    puts("\t\t\t 8. close");
    puts("************************************************");
    printf("t\t\t enter your option []\b\b");
    scanf("%d",&op);
    if(op>=1 && op<=5)
    {
        printf("enter Quantity");
        scanf("%d",&qty);
    }
    switch (op)
    {
        case 1: amt+=qty*10;break;
        case 2: amt+=qty*20;break;
        case 3: amt+=qty*30;break;
        case 4: amt+=qty*40;break;
        case 5: amt+=qty*50;break;
        case 6: printf("billed amount =%.2f",amt);amt=0;break;
        case 7: printf("order cancelled");amt=0;break;
        case 8: return;
    }
    goto start;
return 0;
}