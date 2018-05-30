#include <stdio.h>

int main()

{

	int month = 0;

	

	printf("어울리는 계절에 맞는 사은품 증정합니다.\n여행가고 싶은 달 : ");

	scanf_s("%d",&month);

 

	switch (month)

	{

	case 12:

	case 1:

	case 2:

		printf("겨울에 어울리는 머플러 드립니다.\n");

		break;

	case 3:

	case 4:

	case 5:

		printf("봄에 어울리는 황사마스크를 드립니다.\n");

		break;

	case 6:

	case 7:

	case 8:

		printf("여름에 어울리는 모기퇴치약를 드립니다.\n");

		break;

	case 9:

	case 10:

	case 11:

		printf("가을에 어울리는 선글라스를 드립니다.\n");

		break;

	default:

		printf("존재하지 않는 달 입니다.\n");

	}

 

	return 0;

}
