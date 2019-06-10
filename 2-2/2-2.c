#include <stdio.h>

int main()
{
	short int i;
	int j;
	long int k;
	int a, b, c;
	a = sizeof(i);
	b = sizeof(j);
	c = sizeof(k);
	printf("a is %d\n b is %d\n c is %d \n",a, b, c);
	return 0;
}
