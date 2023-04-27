#include <stdio.h>
#define ARYSIZE 50

void sort(int ary[], int arysize);

int main(void)
{
	int size = 0;
	int ary1[ARYSIZE];
	int ary2[ARYSIZE];

	scanf_s("%d", &size);
	
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &ary1[i]);
		ary2[i] = ary1[i];
	}
	sort(ary1, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (ary2[i] == ary1[j])
			{
				ary2[i] = j;
				ary1[j] = -1;
				break;
			}
		}
	}

	for (int i = 0; i < size; i++)
		printf("%d ", ary2[i]);
}
void sort(int ary[], int arysize)
{
	int temp = 0;

	for (int i = 0; i < arysize; i++)
	{
		for (int j = 0; j < arysize; j++)
		{
			if (ary[i] < ary[j])
			{
				temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
	}
}

