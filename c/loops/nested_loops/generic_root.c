#include <stdio.h>
int main()
{
    long n, s;
    printf("enter the number :");
    scanf("%ld", &n);
    while (n > 9 || n<-9)
    {
        for (s = 0; n != 0; n = n / 10)
            s += n % 10;
        n = s;
    }
    printf("generic root = %d", n);
    return 0;
}