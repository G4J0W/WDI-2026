#include <stdio.h>

double add(int n);

double sub(double start);

double multi(double a,double b);

double divide();

double pow(double liczba, int wykladnik);

double square(double a);

int fact(int n);

int main()
{

	int wybor, n, wykladnik;
	double a, b, wynik;

	do
	{
		printf("\n========== KALKULATOR ==========\n");
		printf("1. Dodawanie n liczb\n");
		printf("2. Odejmowanie od liczby (do podania 0)\n");
		printf("3. Mnozenie dwoch liczb\n");
		printf("4. Dzielenie dwoch liczb\n");
		printf("5. Potegowanie\n");
		printf("6. Kwadrat liczby\n");
		printf("7. Silnia\n");
		printf("0. Wyjscie\n");
		printf("Wybierz operacje: ");

		scanf("%d", &wybor);

		switch(wybor)
		{
			case 1:
				printf("Ile liczb chcesz dodac? ");
				scanf("%d", &n);

				wynik = add(n);
				printf("Wynik dodawania: %lf\n", wynik);
				break;

			case 2:
				printf("Podaj liczbe poczatkowa: ");
				scanf("%lf", &a);

				wynik = sub(a);
				printf("Wynik odejmowania: %lf\n", wynik);
				break;

			case 3:
				printf("Podaj pierwsza liczbe: ");
				scanf("%lf", &a);

				printf("Podaj druga liczbe: ");
				scanf("%lf", &b);

				wynik = multi(a, b);
				printf("Wynik mnozenia: %lf\n", wynik);
				break;

			case 4:
				printf("Podaj pierwsza liczbe: ");
				scanf("%lf", &a);

				printf("Podaj druga liczbe: ");
				scanf("%lf", &b);

				wynik = divide(a, b);
				printf("Wynik dzielenia: %lf\n", wynik);
				break;

			case 5:
				printf("Podaj podstawe: ");
				scanf("%lf", &a);

				printf("Podaj wykladnik: ");
				scanf("%d", &wykladnik);

				wynik = pow(a, wykladnik);
				printf("Wynik potegowania: %lf\n", wynik);
				break;

			case 6:
				printf("Podaj liczbe: ");
				scanf("%lf", &a);

				wynik = square(a);
				printf("Kwadrat liczby: %lf\n", wynik);
				break;

			case 7:
				printf("Podaj liczbe calkowita: ");
				scanf("%d", &n);

				wynik = fact(n);

				if(n >= 0)
					printf("Silnia: %.0lf\n", wynik);
				break;

			case 0:
				printf("Koniec kalkulatora!\n");
				break;

			default:
				printf("Nie ma takiej opcji! Sprobuj ponownie.\n");
		}

	} while(wybor != 0);

	return 0;
}

double add(int n)
{
	if(n<0)	return 0;

	int i;
	double suma=0,x;
	printf("Podawanie %i liczb :)\n",n);
	for(i=0;i<n;i++)
	{
		printf("Podaj %i liczbe: ",i+1);
		scanf("%lf",&x);
		suma+=x;
	}
	return suma;
}

double sub(double start)
{
	double x,wynik=start;
	while(1)
	{
		printf("Aktualny wynik: %fl co chcesz od tego odjac?: ",start);
		scanf("%lf",&x);
		if(x==0) return wynik;

		printf("%lf - %lf = ",wynik,x);
		wynik-=x;
		printf("%lf\n",wynik);
	}
}

double multi(double a,double b)
{
	return a*b;
}

double divide(double a, double b)
{
	if(b==0)
	{
		printf("Nie mozna dzielic przez zero\n");
		return 0;
	}
	return a/b;
}

double pow(double liczba, int wykladnik)
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


double square(double a)
{
	return a*a;
}

int fact(int n)
{
	if(n<0)
	{
		printf("Musisz podac n wieksze od zera!\n");
		return -1;
	}

	if(n==0) return 1;

	return fact(n-1)*n;
}
