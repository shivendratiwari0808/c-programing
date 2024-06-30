#include <stdio.h>
int main()
{
    int nr, a = 1, r, c;
    printf("enter no of rows :");
    scanf("%d", &nr);
    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%3d", a++);
        }
        printf("\n");
    }
    return 0;
}