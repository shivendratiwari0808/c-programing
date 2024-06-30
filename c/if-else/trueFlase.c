#include<stdio.h>
int main(){
    float a=1.1;
    double b=1.1;
    if(a==b){
    puts("true");
    }
    else
    {
        puts("false");
    }
    a=1.5;
    b=1.5;
    if(a==b)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }
    a=1.2;
    b=1.2;
    if(a==b)
    {
        puts("true");
    }
    else{
        puts("false");
    }
    return 0;

}