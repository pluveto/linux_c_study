#include <stdio.h>

int main()
{
	int i = 3, j, k;

	printf("i: %d", i);
	j = i++;
	k = ++i;

	printf("i=%d, j=%d, k=%d\n", i, j, k);
	printf("-i++: %d", -i++);
	printf("i: %d", i);
	return 0;
}
