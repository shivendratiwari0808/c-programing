#include<stdio.h>
#include<string.h>

int checkFasinating(int number){
    int num2 = number * 2;
    int num3 = number * 3;
    char str[15];
    printf("digit = %d %d %d",number,num2,num3);

    for (char digit ='1';digit <='9';digit++){
        if(strchr(str,digit)==NULL || strchr(strchr(str,digit)+1,digit)!=NULL){
            return 0;
        }
    }
    return 1;
}
int main (){
    int number;
    printf("enter a three-digit number :");
    scanf("%d",&number);

    if(number<100 || number>999){
        printf("number is not three-digit\n");
        return 0;
    }
    if (checkFasinating(number)){
        printf("\n%d is a fascinating number \n",number);
    }
    return 0;
}