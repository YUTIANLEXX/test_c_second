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
		while ((arr[i] < mid) && (i < right))   //�����Ѱ��С����ֵ����
		{
			i++;
		}
		while ((arr[j]>mid) && (j > left))      //���ұ�Ѱ��С����ֵ����
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
	} while (i <= j);                   //������ߵ��±꽻����ֹͣ�����һ��ѭ����

	//�ݹ�����
	if (left < j)
	{
		CelerityRun(left, j, arr);
	}
	//�ݹ��Ұ��	
	if (right > i)
	{
		CelerityRun(i, right, arr);
	}
}
int main()
{
	int i = 0;
	int arr[5];
	printf("Ϊ����Ԫ�ظ�ֵ��\n");
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