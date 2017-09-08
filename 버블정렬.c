#include <stdio.h>
int main()
{

	int A[5] = { 70,50,20,90,30 };
	int i = 0, j = 0, t = 0;

	for (i = 0; i < 5; i++)
	{

		for (j = i + 1; j < 5; j++)
		{

			if (A[i] > A[j])
			{

				t = A[i];
				A[i] = A[j];
				A[j] = t;

			}
		}

		printf("%d ", A[i]);

	}

	return 0;
}