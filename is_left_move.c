#include <stdio.h>
#include <string.h>
#include <assert.h>

void left_move(char* arr1, int k)
{
	assert(arr1);
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < k; i++)             //确定需要左移的元素个数
	{
		char tmp = *arr1;               //中间变量存储当前数组首元素
		int j = 0;
		for (j = 0; j < len - 1; j++)    //循环左移，后面的元素依次往前挪
		{
			*(arr1 + j) = *(arr1 + j + 1);
		}
		*(arr1 + len - 1) = tmp;         //中间变量赋值给左移后的元素
	}
}

int is_left_move(char* arr1, char* arr2)
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)   //循环左移一个字符，进行比较。如果是返回1，不是返回0。
	{
		left_move(arr1, 1);
		int ret = strcmp(arr1, arr2);
		if (ret == 0)
			return 1;
	}
	return 0;
}

//int is_left_move(char* arr1, char* arr2)
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//    strncat(arr1, arr2,6);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (1 == ret)
		printf("Yes!\n");
	else
		printf("No!\n");
	return 0;
}