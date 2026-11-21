
#include <stdio.h>

int is_prime(int x);

int main(void)
{
    int number;
    int count = 0;
    int value;

    scanf("%d", &number);

    if (number > 10000)
    {
        printf("NG");
        return 0;
    }

    for (value = 2; value <= number; value++)
    {
        if (is_prime(value) == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

int is_prime(int x)
{
    int divisor;

    if (x < 2)
    {
        return 0;
    }

    for (divisor = 2; divisor <= x / divisor; divisor++)
    {
        if (x % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}
