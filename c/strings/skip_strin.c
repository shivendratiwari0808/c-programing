#include<stdio.h>
int main(){
    char s[5][20]={"jhanvi kapoor", "rashmika mandana", "sharaddha kapoor","kaira adwani","pooja hegde"};
    int i;
    puts("names");
    puts("-------------------------------");
    for(i=0;i<5;i++)
    {
        printf("%c",s[i][i]);
    }
    return 0;
}
