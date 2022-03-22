#include <stdio.h>
int main()
{
	int i, j = 0;
	int arr[5];
	int temp = 0;
	printf("为数组元素赋值：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
		if (i == 2)
		{
			printf("\n");
		}
	}
	return 0;
}