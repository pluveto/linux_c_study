#include <stdio.h>

int main()
{
    int i, j;
    long sum = 0;

    for (i = 1; i <= 10; i++)
    {
        int total = 1;
        for (j = 1; j <= i; j++)
        {
            total *= j;
        }
        sum += total;
    }

    printf("%ld",sum);
    return 0;
}