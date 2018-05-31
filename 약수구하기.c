#include <stdio.h>

int main()

{

	int num = 0, num1 = 0;

 

	printf("숫자입력 : ");

	scanf_s("%d", &num1);

 printf("%의 약수 : ",num1); 

	while (num<=num1)

	{

		num += 1;
		if (num1%num==0)

		{

			printf("%-3d", num);

		}

	}

	printf("\n");

 

	return 0;

}
