#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char s[100][100],s2[100];
    int i,j,n;
    printf("enter no of string :");
    scanf("%d",&n);
    flushall();
    printf("enter %d strings\n",n);
    for(i=0;i<n;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(stricmp(s[i],s[j])>0)
            {
                strcpy(s2,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],s2);
            }
        }
    }
    puts("sorted strings");
    puts("------------------------");
    for(i=0;i<n;i++)
    {
        puts(s[i]);
    }
    return 0;
}