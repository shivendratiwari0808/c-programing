#include <stdio.h>
#define p printf
#define c case
#define b break
int main()
{
    long m, n, rev = 0;
    int r;
    p("enter n value :");
    scanf("%ld", &n);
    if (n < 0)
    {
        p("-", n = -n);
    }
    m = n;
    while (m != 0)
    {
        r = m % 10;
        rev = rev * 10 + r;
        m = m / 10;
    }
    do
    {
        switch (rev % 10)
        {
            c 0 : p("zero");
            b;
            c 1 : p("one");
            b;
            c 2 : p("two");
            b;
            c 3 : p("three");
            b;
            c 4 : p("four");
            b;
            c 5 : p("five");
            b;
            c 6 : p("six");
            b;
            c 7 : p("seven");
            b;
            c 8 : p("eight");
            b;
            c 9 : p("nine");
        }
        rev = rev / 10;
        p(" ");
    } while (rev != 0);
    while (n % 10 == 0 && n != 0)
        p("zero ", n = n / 10);
    return 0;
}