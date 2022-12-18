#include <stdio.h>

int is_leapyear(unsigned int x);

int main(void)
{
    unsigned int n;

    scanf("%u", &n);
    
    if (is_leapyear(n))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

int is_leapyear(unsigned int x)
{
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
                return 1;
            return 0;
        }
        return 1;
    }
    return 0;
}