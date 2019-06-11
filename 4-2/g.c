#include <stdio.h>

int abs(int x);

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", abs(x));
}

int abs(int x)
{
    return x > 0 ? x : -x;
}