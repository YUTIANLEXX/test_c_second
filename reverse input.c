#include <stdio.h>
int main()
{
	int arr[5] = { 0 };
	int i = 0;
	int temp = 0;
	printf("please enter a arr:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Original arr is:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 2; i++)             //��������Ԫ�ص�ǰ��λ�û���
	{
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
	}
	printf("Now arr is:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}