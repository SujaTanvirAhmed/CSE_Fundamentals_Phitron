#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b);

int main(void)
{
    unsigned int t, n, i, j, k, count;
    scanf("%u", &t);
    unsigned int ans[t];

    for (i = 0; i < t; i++)
    {
        count = 0;
        scanf("%u", &n);
        unsigned int arr[n];
        for (j = 0; j < n; j++)
            scanf("%u", &arr[j]);

        for (j = 0; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (gcd(arr[j], arr[k]) == 1)
                    count++;
            }
        }
        ans[i] = 2 * count;
    }

    for (i = 0; i < t; i++)
        printf("%u\n", ans[i]);

    return 0;
}

unsigned int gcd(unsigned int a, unsigned int b)
{
    unsigned int temp;
    while (a % b > 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}