#include<stdio.h>
int main(){
    char s[ ]="naresh \tit \nammerpet \0hyd";
    printf("%s\n",s);
    puts(s);
    printf(s);
    return 0;
}