#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = { 0 };
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s", &arr);
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	system("pause");
	return 0;
}
//Another way to do it
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}