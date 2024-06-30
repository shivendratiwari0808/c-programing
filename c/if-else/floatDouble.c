#include<stdio.h>
int main(){
    float a=1.1;
    double b= 1.1;
    printf("%.10f, %.10f\n",a,b);
    a=1.5;
    b=1.5;
    printf("%.10f,%.10f\n",a,b);
    a=1.0;
    b=1.0;
    printf("%.10f,%.10f\n",a,b);
    a=1.2;
    b=1.2;
    printf("%.10f,%.10f\n",a,b);
    return 0;
}