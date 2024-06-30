#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("enter a number :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d+", i, s += i);
    }
    printf("\b=%d", s);
    return 0;
}