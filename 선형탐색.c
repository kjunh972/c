#include <stdio.h>
int main()
{

	int A[5] = { 10,20,30,40,50 };
	int a = 0 , i = 0;
	scanf("%d", &a);

	for (i = 0; i < 5; i++)
	{

		if (A[i] == a)
		{

			printf("찾았습니다.");
			break;

		}

		else if (A[i] != a)
		{

			printf("원하는 숫자가 없습니다.");
			break;

		}
	}

	return 0;
}