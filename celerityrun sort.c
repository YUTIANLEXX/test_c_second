#include <stdio.h>
void CelerityRun(int left, int right, int arr[])
{
	int i, j = 0;
	int mid, temp = 0;
	i = left;
	j = right;
	mid = arr[(left + right) / 2];
	do
	{
		while ((arr[i] < mid) && (i < right))   //从左边寻找小于中值的数
		{
			i++;
		}
		while ((arr[j]>mid) && (j > left))      //从右边寻找小于中值的数
		{
			j--;
		}
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);                   //如果两边的下标交错，就停止（完成一次循环）

	//递归左半边
	if (left < j)
	{
		CelerityRun(left, j, arr);
	}
	//递归右半边	
	if (right > i)
	{
		CelerityRun(i, right, arr);
	}
}
int main()
{
	int i = 0;
	int arr[5];
	printf("为数组元素赋值：\n");
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	CelerityRun(0, 4, arr);
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