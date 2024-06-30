#include<stdio.h>
#include<string.h>
int main(){
    int id,hindi,eng,math,science,social,gk,total;
    char name[20],grade[20];
    float avg;
    printf("enter student ID :");
    scanf("%d",&id);
    fflush ;
    printf("enter student name :");
    scanf("%s",name);
    printf("please enter 6 subjects marks : hindi marks :");
    scanf("%d",&hindi);
    printf("english marks :");
    scanf("%d",&eng);
    printf("math marks :");
    scanf("%d",&math);
    printf("science marks :");
    scanf("%d",&science);
    printf("social marks :");
    scanf("%d",&social);
    printf("gk marks :");
    scanf("%d",&gk);
    total=hindi+eng+math+science+social+gk;
    avg=total/6.0;
    if(hindi>=35 && eng>=35 && math>=35 && science>=35 && social>=35 && gk>=35)
    {
        if(avg>=75)strcpy(grade,"distinction");
        else if(avg>=60)strcpy(grade,"1st division");
        else if(avg>=50)strcpy(grade,"2nd division");
        else strcpy(grade,"3rd division");
    }
    else strcpy(grade,"fail");
    puts("id \t name \t total \t avg \t grade");
    puts("---------------------------------------------------------");
    printf("%d \t %s \t %d \t %.2f \t %s",id,name,total,avg,grade);

    return 0;
}