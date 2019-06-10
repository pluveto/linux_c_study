#include <stdio.h>

int main()
{
	int a;
	a = ((a=3*5, a*4), a+5);
	printf("%d",a);
	return 0;
}
