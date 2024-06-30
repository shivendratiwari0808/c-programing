#include <stdio.h>
int main()
{
    int nr, c, r;
    printf("enter no of rows :");
    scanf("%d", &nr);
    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nr; c++)
            if (c == r)
                printf("1 ");
            else if (r > c)
                printf("0 ");
            else
                printf("2 ");
        printf("\n");
    }
    return 0;
}