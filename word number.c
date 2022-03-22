#include <stdio.h>
int main()
{
	int i = 0;
	int word = 1;                 //表示单词数
	char arr[20] = { 0 };           //字符串数组
	char blank;                   //表示空格
	gets(arr);
	if (arr[0] == '\0')
	{
		printf("There is no char!\n");
	}
	else if (arr[0] == ' ')
	{
		printf("First char just is a blank\n");
	}
	else
	{
		for (i = 0; arr[i] != '\0'; i++)
		{
			blank = arr[i];
			if (blank == ' ')
			{
				word++;
			}
		}
		printf("%d\n", word);
	}
	return 0;
}