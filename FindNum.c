#include <stdio.h>
int FindNum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
			return 1;
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 7;
	int ret = FindNum(arr, k, 3, 3);
	if (1 == ret)
		printf("找到了!\n");
	else
		printf("找不到!\n");
	return 0;
}

//Improvement

//#include <stdio.h>
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3]={{1, 2, 3}, { 4, 5, 6 }, { 7, 8, 9 }};
//	int k = 7;
//	int x, y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (1 == ret)
//	{
//		printf("找到了!\n");
//		printf("下标是：%d %d\n", x, y);
//	}
//	else
//		printf("找不到!\n");
//	return 0;
//}