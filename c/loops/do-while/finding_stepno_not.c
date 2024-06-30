#include <stdio.h>
int main()
{
    long n;
    int r1, r2, s = 1;
    printf("enter n value :");
    scanf("%ld", &n);
    r1 = n % 10;
    n = n / 10;
    while (n != 0)
    {
        r2 = n % 10;
        if (r1 - r2 == 1 || r2 - r1 == 1)
        {
            r1 = r2;
            n = n / 10;
        }
        else
        {
            printf("not a step no");
            s = 0;
            break;
        }
    }
    if (s == 1)
        puts("step no");
    return 0;
}