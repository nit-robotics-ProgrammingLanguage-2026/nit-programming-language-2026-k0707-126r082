
#include <stdio.h>

int check_prime(int num)
{
    if (num < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int total = 0;

    scanf("%d", &n);

    if (n > 10000)
    {
        printf("NG");
        return 0;
    }

    for (int k = 1; k <= n; k++)
    {
        total += check_prime(k);
    }

    printf("%d", total);

    return 0;
}
