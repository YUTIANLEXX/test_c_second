#include <stdio.h>
int main()
{
	int i, j = 0;
	int arr[10];
	int temp = 0;
	int count = 0;
	printf("Ϊ����Ԫ�ظ�ֵ��\n");

	//�Ӽ���Ϊ����Ԫ�ظ�ֵ

	for (i = 0; i < 5; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &arr[i]);
	}
	//��С��������

	for (i = 0; i < 4; i++)
	{
		temp = arr[i];
		count = i;
		for (j = i + 1; j < 5; j++)         //�ж��Ƿ��һ��Ԫ�رȺ����Ԫ��С
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				count = j;
			}
		}
		//��������Ԫ��ֵ
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