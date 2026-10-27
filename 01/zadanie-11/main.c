#include <stdio.h>

int main()
{
	int x;
	printf("Podaj liczbe calkowita: \n");
	scanf("%i",&x);
	if(x%2==0 && x>0)
		printf("Liczba %i jest parzysta i dodatnia\n",x);
	else
		printf("Liczba %i NIE jest parzysta i dodatnia\n",x);

	return 0;
}
