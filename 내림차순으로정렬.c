#include <stdio.h>
int main()
{

	int A[5] = { 20,15,41,36,95 };
	int min = 100, pos = 0, i = 0, a = 0;

	for (a = 0; a < 5; a++)
	{

		min = 1, pos = 0;

		for (i = 0; i < 5; i++)
		{
			if (A[i] > min)
			{
				min = A[i];
					pos = i;
			}
		}
		printf("%d ", min);
			A[pos] = 1;
	}
}