#include <stdio.h>
int main()
{
	int a, n = 0;
	scanf("%d,%d", &a, &n);
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("sum=%d", sum);
	return 0;
}