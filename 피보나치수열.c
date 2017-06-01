#include <stdio.h>
void main()
{

	int a = 1, b = 1, c = 0, i = 0;

	printf("1 1 ");
	for (i=0; i<8; i++)
	{ 
	
		c = a + b;

		printf("%d ", c);

		a = b;
		b = c;

	}
}