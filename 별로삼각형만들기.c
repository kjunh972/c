#include <stdio.h>

int main()

{

	char star = '*';

	char space = ' ';

	int i, k, j;

	for (i = 1; i <= 9; i++)

	{

		int sp = 9 - i;

		for (j = 1; j <= sp; j++)

		{

			

			printf(" ");

		}

		for (k = 1; k <= i; k++)

		{

			

			printf("%c ",star);

		}

		printf("\n");

	}

 

	return 0;

}
