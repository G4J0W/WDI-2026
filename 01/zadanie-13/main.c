#include <stdio.h>

int main()
{
	int n,i;
	float suma=0,srednia,x;

	printf("Podaj liczbe n: \n");
	scanf("%i",&n);

	for(i=0;i<n;i++)
	{
	printf("\nPodaj %i liczbe: \n",i+1);
	scanf("%f",&x);
	suma+=x;
	}
	srednia = suma/n;
	printf("Suma wynosi: %f. Srednia wynosi: %f\n",suma,srednia);

	return 0;
}
