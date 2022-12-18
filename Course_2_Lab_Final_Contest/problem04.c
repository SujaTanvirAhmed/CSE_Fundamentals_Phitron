#include <stdio.h>

void print_codes(unsigned int x);

int main(void)
{
    unsigned int t, i;

    scanf("%u", &t);

    unsigned int codes[t];

    for (i = 0; i < t; i++)
        scanf("%u", &codes[i]);

    for (i = 0; i < t; i++)
    {
        print_codes(codes[i]);
        printf("\n");
    }

    return 0;
}

void print_codes(unsigned int x)
{
    while (x > 0)
    {
        printf("%c", x % 10 + 64);
        x /= 10;
    }
}