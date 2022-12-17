#include <stdio.h>

unsigned int power_recursive(unsigned int b, unsigned int p);

int main(void)
{
    unsigned int n, m, result;

    printf("\nEnter base and power: ");
    scanf("%u %u", &n, &m);

    result = power_recursive(n, m);
    printf("\n%u to the power of %u is %u\n", n, m, result);

    return 0;
}

unsigned int power_recursive(unsigned int b, unsigned int p)
{
    if (p == 0)
        return 1;
    return b * power_recursive(b, p - 1);
}