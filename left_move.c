#include <stdio.h>
#include <string.h>
#include <assert.h>

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}

//Another way to do it
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}