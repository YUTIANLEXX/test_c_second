#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	//�ж�i�Ƿ�Ϊ������
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		int sum = 0;
		//����i��λ��
		while (tmp /= 10)
		{
			n++;
		}
		//����i��ÿһλ��n�η�֮��
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		//�Ƚ�i��sum
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}