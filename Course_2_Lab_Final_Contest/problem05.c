#include <stdio.h>

int main(void)
{
    unsigned int n, s, d;

    scanf("%u %u", &n, &s);
    
    d = s - n;
    
    printf("%u\n", d / 2);

    return 0;
}