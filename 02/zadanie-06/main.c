#include <stdio.h>

int main()
{
	int x;
	qwe:
	printf("Podaj numer miesiaca 1-12:  ");
	scanf("%i",&x);
	if(x<1 || x>12)
	{
		printf("Bledny numer miesiaca. Popraw sie\n");
		goto qwe;
	}
	switch(x)
	{
		case 1:
		case 2:
		case 3:
			printf("Numer kwartalu ==> 1\n");
			break;
		case 4:
		case 5:
		case 6:
			printf("Numer kwartalu ==> 2\n");
			break;
		case 7:
		case 8:
		case 9:
			printf("Numer kwartalu ==> 3\n");
			break;
		case 10:
		case 11:
		case 12:
			printf("Numer kwartalu ==> 4\n");
			break;
	}

	return 0;
}
