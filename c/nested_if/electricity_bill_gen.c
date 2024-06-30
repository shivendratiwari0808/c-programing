#include<stdio.h>
int main(){
long serno,pre,cur,units;
char name[20];
float amt;
printf("enter service number :");
scanf("%ld",&serno);
printf("enter cousnmer name :");
scanf("%s",name);
printf("enter pervious month reading :");
scanf("%ld",&pre);
current:
printf("enter current reading :");
scanf("%ld",&cur);
if(cur<pre){
    puts("\a cheack current month reading :");
    goto current;
}
units=cur-pre;
if(units<=50)amt=units*1.45;
else if(units<=100)amt=50*1.45+(units-50)*2.8;
else if(units<=200)amt=50*1.45+50*2.8+(units-100)*3.05;
else if(units<=300)amt=50*1.45+50*2.8+100*5.05+(units-200)*4.75;
else if(units<=500)amt=50*1.45+50*2.8+100*3.05+100*4.75+(units-300)*6;

else
amt=50*1.45+50*2.8+100*3.05+100*4.75+200*6+(units-500)*6.25;

if(amt<65)amt=65;

printf("amount=%.2f",amt);

return 0;
}