#include <stdio.h>

int main(void)
{
    unsigned int count, n, i;
    unsigned char alphabet[26];

    count = 0;

    for (i = 0; i < 26; i++)
        alphabet[i] = 0;

    scanf("%u", &n);

    char s[n + 1];

    scanf("%s", s);

    for (i = 0; i < n; i++)
        alphabet[s[i] - 97]++;

    for (i = 0; i < 26; i++)
        if (alphabet[i] == 1)
            count++;

    printf("%u\n", count);

    return 0;
}