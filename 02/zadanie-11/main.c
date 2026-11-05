#include <stdio.h>

double potega(double liczba, int wykladnik);

int main()
{
	double liczba;
	int wykladnik;
	printf("Podaj liczbe potegowana: ");
	scanf("%lf",&liczba);
	printf("Podaj wykladnik: ");
	scanf("%i",&wykladnik);

	printf("\nLiczba %lf do %i-ej potegi to: %lf\n",liczba,wykladnik, potega(liczba,wykladnik));


	return 0;
}

double potega(double liczba,int wykladnik)
{
	if(wykladnik==0)
		return 1;
	if(wykladnik<0)
	{
	liczba=1/liczba;
	wykladnik*=-1;
	}
	return potega(liczba,wykladnik-1)*liczba;
}
