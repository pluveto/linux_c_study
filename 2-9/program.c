#include <stdio.h>

int main()
{
    char c = 'a';//char = int
    int i = 1234;
    float f = 12.123456;
    double d = 12.6;

    // 十进制，八进制和十六进制
    printf("%d %o %x,\n",i,i,i);

    printf("%c %d\n",c,c);
    printf("%s\n","hello!");
    printf("%f %e %g\n",f,f,f);

    return 0;
}