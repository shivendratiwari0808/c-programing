#include<stdio.h>
void show(int x)  //fun def ,xis formal parameter
{
    x=200;
} // x deleted
void main()
{
    int x=100; //local var
    printf("before fun call x=%d\n",x);
    show(x); // fun calling,x is actual paramerter
    printf("after fun call x=%d",x);
}