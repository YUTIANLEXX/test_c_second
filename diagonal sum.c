#include <stdio.h>
int main()
{
	int a[3][3];
	int i = 0;
	int j = 0;
	int sum = 0;
	printf("please input:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("the result is:%d\n", sum);
	return 0;
}