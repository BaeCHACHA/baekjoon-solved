#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

int sum;

int main(void)
{
	int l = 0;
	int r = 0;
	int k = 0;
	int count = 0;

	scanf_s("%d", &l);
	scanf_s("%d", &r);
	scanf_s("%d", &k);

	int a = 1, d = 1;

	while (1)
	{
		sum = (k * (2 * a + (k - 1) * d)) / 2;
		if (l > sum)
		{
			d++;
			continue;
		}
		if (sum > r)
		{
			d = 1;
			a++;
			continue;
		}
		//break문 아직 생각못함 ㅎㅎ
		if (k * a >= r / 2)
			break;
		else
		{
			count++;
			d++;
		}
	}
	printf("%d", count);
}