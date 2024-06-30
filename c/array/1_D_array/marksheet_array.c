#include<stdio.h>
int main(){
    int rollno,sub[6],i,total=0,p=1;
    char name[30],fname[30],mname[30],dob[20],gender[20],school[30],id1[30],id2[30],subj[6][10]={"hin","eng","math","sci","soc","gk"};
    float avg;
    printf("enter student id :");
    scanf("%d",&rollno);
    fflush(stdin);
    printf("enter student name :");gets(name);
    printf("enter father name :");gets(fname);
    printf("enter mother name :");gets(mname);
    printf("enter date of birth :");gets(dob);
    printf("enter gender :");gets(gender);
    printf("enter school name :");gets(school);
    printf("enter identifiction marks 1 :");gets(id1);
    printf("enter identification mark 2 :");gets(id2);
    printf("enter 6 sub marks :");
    for(i=0;i<6;i++)
    {
        scanf("%d",&sub[i]);
        total+=sub[i];
        if(sub[i]<35)
        p=0;
    }
    avg=total/6.0;
    puts("---------------------------------------------------");
    puts("\t\t BOARD OF SECONDARY EDUCATION ");
    puts("\t\t ANDHRA PRADESH");
    puts("-----------------------------------------------------");
    printf("roll no :%d\t name: %s\n",rollno,name);
    printf("father :%s\t mother :%s\n",fname,mname);
    printf("dob : %s\t gender:%s\n",dob,gender);
    printf("school : %s\n",school);
    puts("-----------------------------------------------------");
    puts("identification marks :");
    puts("------------------------------------------------------");
    puts(id1);
    puts(id2);
    puts("-------------------------------------------------------");
    puts("subject\tmarks\tpass/fail");
    puts("---------------------------------------------------------");
    for(i=0;i<6;i++)
    {
        printf("%s\t%d\t%s\n",subj[i],sub[i],sub[i]<35?"f" : "p");        
    }
    puts("-------------------------------------------------------");
    printf("%s total=%d, avg=%.2f and got ",name,total,avg);
    if(p==0)puts("failed");else if(avg>=75)puts("disinction");
    else if(avg>=60)
    puts("1st class");else if (avg>=50)puts("2nd class");else puts("3rd class");



    return 0;

}