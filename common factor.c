#include <stdio.h>
int main()
{
	int x;
	int y;
	int z;
	scanf("%d %d", &x, &y);
	while (x%y)
	{
		z = x%y;
		x = y;
		y = z;
	}
	printf("���Լ���ǣ�%d\n", y);
	return 0;
}