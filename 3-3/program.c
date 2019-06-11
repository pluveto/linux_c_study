#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;

    do
    {
        sum = sum + i;
        i = i + 1;        
    } while (i<=100);

    printf("%d\n",sum);
    
    return 0;
}