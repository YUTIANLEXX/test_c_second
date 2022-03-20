#include <stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)
	{
		if (num % 2 == 1)  //���ɼ��㸺��
			count++;
		num = num / 2;
	}
	printf("��������1�ĸ���=%d\n", count);
	return 0;
}

// Another way to do it
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("��������1�ĸ���=%d\n", count);
//	return 0;
//}

// Another way to do it
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("��������1�ĸ���=%d\n", count);
//	return 0;
//}