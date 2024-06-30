#include<stdio.h>
int sum(int, int); //function declarition or prototype
int main(){   //caller
    int a=1,b=2;
    int s = sum(a,b); //fun calling callie a,b are actual parameters
    printf("sum = %d\n",s);
    printf("sum=%d\n",sum(5,8));
}
int sum(int x ,int y)  //fun defination,f is formal parameter
{
    return x+y;
}
