#include <stdio.h>
int main()
{
	int i = 0;
	int word = 1;                 //��ʾ������
	char arr[20] = { 0 };           //�ַ�������
	char blank;                   //��ʾ�ո�
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