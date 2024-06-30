#include<stdio.h>
int main(){
    int id,sub[6],i,total=0,p=1;
    char name[30];
    float avg;
    printf("enter student id :");
    scanf("%d",&id);
    printf("enter student name :");
    scanf("%s",&name);
    printf("enter 6 sub marks :");
    for(i=0;i<6;i++)
    {
        scanf("%d",&sub[i]);
        total+=sub[i];
        if(sub[i]<35)
        p=0;
    }
    avg=total/6.0;
    printf("%s total =%d,avg=%.2f and %s",name,total,avg,p?"passed" : "failed");


    return 0;

}