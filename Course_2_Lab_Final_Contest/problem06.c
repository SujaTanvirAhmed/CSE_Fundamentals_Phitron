#include <stdio.h>
#include <math.h>

int is_prime(unsigned int x);
void print_primes(unsigned int start, unsigned int end);

int main(void)
{
    unsigned int t, i, j;

    scanf("%u", &t);

    unsigned int arr[t][2];

    for (i = 0; i < t; i++)
        scanf("%u %u", &arr[i][0], &arr[i][1]);

    for (i = 0; i < t; i++)
        print_primes(arr[i][0], arr[i][1]);

    return 0;
}

int is_prime(unsigned int x)
{
    unsigned int i;
    if (x == 1 || x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;
    for (i = 3; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

void print_primes(unsigned int start, unsigned int end)
{
    unsigned int j;
    for (j = start; j <= end; j++)
    {
        if (is_prime(j))
            printf("%u ", j);
    }
    printf("\n");
}