#include <stdio.h>
int main()
{
    int n, r, c;
    char ch = 'A';
    printf("enter no of rows :");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++){
            if (c == r || c == 1 || n==r)printf("* ");
            else printf("%c ", ch++);
            if (ch > 'Z')ch = 'A';}
        printf("\n");
    }
    return 0;
}