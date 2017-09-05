#include <stdio.h>
void main()
{

	int A[5] = { 30,50,90,70,60 };
	int min = 0, a = 0, i = 0, pos = 0;

	for (a = 0; a < 5; a++)
	{

		min = 100, pos = 0;
		
		for (i = 0; i < 5; i++)
		{

			if (A[i] < min)
			{
				min = A[i];
				pos = i;

			}
		}

		printf("%d ", min);
		A[pos] = 100;
	}
}