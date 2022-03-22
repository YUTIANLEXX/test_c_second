#include <stdio.h>
int main()
{
	int i, j = 0;
	int arr[10];
	int temp = 0;
	int count = 0;
	printf("为数组元素赋值：\n");

	//从键盘为数组元素赋值

	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &arr[i]);
	}
	//从小到大排序

	for (i = 0; i < 4; i++)
	{
		temp = arr[i];
		count = i;
		for (j = i + 1; j < 5; j++)         //判断是否第一个元素比后面的元素小
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				count = j;
			}
		}
		//交换两个元素值
		arr[count] = arr[i];
		arr[i] = temp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", arr[i]);
		if (2 == i)
		{
			printf("\n");
		}
	}
	return 0;
}