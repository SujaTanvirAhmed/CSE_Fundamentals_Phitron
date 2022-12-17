#include <stdio.h>

int main(void)
{
    unsigned int n, e, i, j;

    scanf("%u", &n);

    for (i = 0; i < n; i++)
    {
        for (e = n - i - 1; e > 0; e--)
            printf(" ");
        for (j = 0; j < i * 2 + 1; j++)
        {
            if (i % 2 == 0)
                printf("^");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
