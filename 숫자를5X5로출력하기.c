#include <stdio.h>
int main()
{
	
	int i = 0 , j = 0 , m = 0 , A[i][j];
	
	for (i=0; i<5; i++)
	{
		
		for (j=0; j<5; j++)
		{
			
			m++;
			A[i][j] = m;	
			printf("%d ", A[i][j]);
			
		}
		
		printf("\n");
	}
	
	return 0;
}
