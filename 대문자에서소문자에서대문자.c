#include <stdio.h>

int main(void)

{

	char ch;
	
	printf("대문자나 소문자를 입력해주세요 : ") ;
	scanf("%c",&ch);

	int ch2 = (int)ch;

	if (ch >= 65 && ch <= 90)

	{

		printf("입력하신 문자는 대문자입니다\n");
		printf("소문자 : %c\n", (char)ch2+32);

	}

	else if (ch >= 97 && ch <= 122) {

		printf("입력하신 문자는 소문자입니다\n");
		printf("대문자 : %c\n", (char)ch2-32);

	}

	else {

		printf("잘못입력하셨습니다\n");

		if (ch2 >= 21 && ch2 <= 47 || ch2 >= 58 && ch2 <= 63 || ch2 >= 91 && ch2 <= 96 || ch2 >= 123 && ch2 <= 127)

		{

			printf("이유 : 특수문자를 입력하셨습니다.\n");

		}

		else {

			printf("이유 : 숫자를 입력하셨습니다.\n");

		}

	}

 

	return 0;

}
