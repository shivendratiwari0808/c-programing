#include<stdio.h>
int main(){
    int x = 54;
    printf("%d\n",x);
    //x++;// post increment
    ++x; // pre increment
    printf("%d\n",x);
    x = x *8;
    printf("%d\n",x);
    --x;
    printf("%d\n",x);

    return 0;
}