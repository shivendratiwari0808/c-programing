#include<stdio.h>
int main(){
    int n;
    printf("enter month between (1-12) :");
    scanf("%d",&n);
    switch(n)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: puts("31 days");break;
        case 2: puts("28/29 days");break;
        case 4: case 6: case 9: case 11: puts("30 days");break;
        default : puts("invaild month no");
    }
    return 0;
}