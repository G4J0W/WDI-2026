#include <stdio.h>

int main()
{
	char role;
	printf("Wybierz klase spoleczna: ");
	scanf("%c",&role);
	switch(role)
	{
		case 'P':
			printf("Poddany: \n");
			break;
		case 'G':
			printf("Giermek: \n");
			break;
		case 'R':
			printf("Rycerz: \n");
			break;
		case 'M':
			printf("Mag: \n");
			break;
		case 'K':
			printf("Krolowa: \n");
			break;
	}

	switch(role)
	{

		case 'K':
			printf("moze rozkazywac krolowi\n");
		case 'M':
			printf("moze rozmawiac z Krolem\n");
		case 'R':
			printf("moze wchodzic do zamku codziennie oraz rekrutowac giermkow\n");
		case 'G':
			printf("moze wchodzic na dziedziniec zamkowy codziennie\n");
		case 'P':
			printf("moze czcic Krola\n");
			break;
		default:
			printf("Podano zly znak");
			break;
	}

	return 0;
}
