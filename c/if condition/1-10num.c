#include<stdio.h>
int main(){
    int i=1;
    abc:
    if(i<11)
    {
        printf("%d\n",i);
        i++;
        goto abc;
    }
    return 0;
}