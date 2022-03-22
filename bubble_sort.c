#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			if (flag == 1)
			{
				break;
			}
		}
	}
}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}

//Another way to do
//#include <stdio.h>
//int main()
//{
//	int i, j = 0;
//	int arr[5];
//	int temp = 0;
//	printf("为数组元素赋值：\n");
//
//	//从键盘为数组元素赋值
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("a[%d]=", i);
//		scanf("%d", &arr[i]);
//	}
//	//从小到大排序
//
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 4; j >= i; j--)
//		{
//			if (arr[j] <arr[j - 1])          //如果前一个数大于后一个数
//			{
//				//交换两个数组元素的值
//				temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\t", arr[i]);
//		if (2 == i)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}
