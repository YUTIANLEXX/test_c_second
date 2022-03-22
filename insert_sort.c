#include <stdio.h>
int main()
{
	int i = 0;
	int arr[5];
	int temp, count = 0;
	printf("为数组元素赋值：\n");
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < 5; i++)
	{
		temp = arr[i];
		count = i - 1;
		while ((count >= 0) && (temp < arr[count]))
		{
			arr[count + 1] = arr[count];
			count--;
		}
		arr[count + 1] = temp;
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