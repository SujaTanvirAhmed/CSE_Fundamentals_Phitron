#include <stdio.h>

int find_pos(unsigned int size, int array[], int needle);

int main(void)
{
    unsigned int t, n, i, j;
    scanf("%u", &t);
    int res[t], num;

    for (i = 0; i < t; i++)
    {
        scanf("%u", &n);
        int arr[n];
        for (j = 0; j < n; j++)
            scanf("%d", &arr[j]);
        scanf("%d", &num);
        res[i] = find_pos(n, arr, num);
    }

    for (i = 0; i < t; i++)
    {
        printf("Case %d: ", i + 1);
        if (res[i] == -1)
            printf("Not Found\n");
        else
            printf("%d\n", res[i] + 1);
    }

    return 0;
}

int find_pos(unsigned int size, int array[], int needle)
{
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == needle)
            return i;
    }
    return -1;
}