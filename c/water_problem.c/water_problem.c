#include<stdio.h>
int main(){
    int a[]= {1,8,6,2,5,4,8,3,7};
    int w=0;
    int h=0;
    int area=0;
    int maxArea=0;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            w=j-i;
            if(a[i]<=a[j]) h=a[i];
            else h=a[j];
            area=w*h;
            if(maxArea<area)maxArea=area;
        }
    }
    printf("max area of container %d",maxArea);
    return 0;
}