#include <stdio.h>

int sort(float *num1, float *num2);
int main()
{
    float a, b, c;
    scanf("%f,%f,%f", &a, &b, &c);
    sort(&a, &b);
    sort(&b, &c);
    printf("%f %f %f\n", a, b, c);

    return 0;
}

// 按从小到大交换变量
int sort(float *num1, float *num2)
{
    if (*num1 > *num2)
    {
        printf("before swap %f %f\n", *num1, *num2);
        float temp = *num1;
        num1 = num2;
        num2 = &temp;
        printf("after swap %f %f\n", *num1, *num2);
    }
}