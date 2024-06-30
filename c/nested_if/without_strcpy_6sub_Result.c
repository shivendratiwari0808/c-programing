#include<stdio.h>
int main(){
    int id,hindi,eng,gk,math,science,social,total;
    char name[20];
    float avg;
    printf("enter student id :");
    scanf("%d",&id);
    printf("enter student name :");
    scanf("%s",name);
    printf("enter 6 subject marks :");
    scanf("%d%d%d%d%d%d",&hindi,&eng,&gk,&math,&science,&social);
    total=hindi+eng+gk+math+science+social;
    avg=total/6.0;
    puts("id \tname \ttotal \tavg \tgrade");
    puts("----------------------------------------");
    printf("%d\t%s\t%d\t%.2f\t",id,name,total,avg);
    if(hindi>=35 && eng>=35 && gk>=35 && math>=35 && science>=35 && social>=35)
    {
        if(avg==75)puts("distintion");
        else if(avg>=60)puts("1st class");
        else if(avg>=50)puts("2nd class");
        else puts("3rd class");
    }
    else puts("fail");
return 0;
}