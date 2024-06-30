#include <stdio.h>
int main()
{
    int i, n, s = 0;
    printf("enter a number :");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            s += i;
    if (s == n)
        printf("perfect no");
    else
        printf("not a perfect no");
    return 0;
}