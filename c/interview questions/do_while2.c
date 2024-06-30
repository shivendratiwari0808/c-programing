#include <stdio.h>
int main()
{
    int a = 0;
    do
    {
        printf("%d\n", a);
    } 
    while (a++);
    {
        printf("%d", a);
    }
    return 0;
}