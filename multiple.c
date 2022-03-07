#include <stdio.h>
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}