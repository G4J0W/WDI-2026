#include <stdio.h>
#include <math.h>

int main()
{
	float a,b;
	printf("Podaj pierwsza liczbe:\n");
	scanf(" %f",&a);
	printf("Podaj druga liczbe:\n");
	scanf(" %f",&b);

	if(!fmod(a,b))
		printf("Liczba %f jest podzielna przez %f\n",a,b);
	else
		printf("Liczba %f jest NIE podzielna przez %f\n",a,b);

	return 0;
}
