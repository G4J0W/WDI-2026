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

double potega(double liczba, int wykladnik)
{
	int i;
	double wynik;

	if(wykladnik==0)
		return 1.0;
	if(wykladnik==1)
		return liczba;
	if(wykladnik==-1)
		return 1/liczba;


	if(wykladnik<0)
	{
		liczba=1/liczba;
		wykladnik*=-1;
	}
	wynik=liczba;
	for(i=1;i<wykladnik;i++)
		wynik*=liczba;

	return wynik;
}
