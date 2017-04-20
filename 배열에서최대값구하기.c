#include <stdio.h>
int main()
{

	int i = 0, max = 0;
	int arr[4] = { 1,2,3,4 };
	max = arr[0];

	for (i = 1; i <= 3; i++)
	{

		if (max < arr[i])
			max = arr[i];
	}
	printf(" : %d", max);
}
