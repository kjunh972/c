#include <stdio.h>

int main()
{
	int p1;
	int p2;

	printf("°¡À§¹ÙÀ§º¸ °ÔÀÓ\n");
	printf("°¡À§: 0\n");
	printf("¹ÙÀ§: 1\n");
	printf("º¸: 2\n");

	printf("player1´Ô 0,1,2Áß ÇÏ³ª¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä: ");
	scanf("%d", &p1);

	printf("player2´Ô 0,1,2Áß ÇÏ³ª¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä: ");
	scanf("%d", &p2);

	if (p1 == 0)
		if (p2 == 0)
			printf("¹«½ÂºÎ\n");

	if (p1 == 0)
		if (p2 == 1)
			printf("player2´Ô ½Â¸®\n");

	if (p1 == 0)
		if (p2 == 2)
			printf("player1´Ô ½Â¸®\n");

	if (p1 == 1)
		if (p2 == 0)
			printf("player2´Ô ½Â¸®\n");

	if (p1 == 1)
		if (p2 == 1)
			printf("¹«½ÂºÎ\n");

	if (p1 == 1)
		if (p2 == 2)
			printf("player2´Ô ½Â¸®\n");

	if (p1 == 2)
		if (p2 == 1)
			printf("player2´Ô ½Â¸®\n");

	if (p1 == 2)
		if (p2 == 2)
			printf("¹«½ÂºÎ\n");

	return 0;
}