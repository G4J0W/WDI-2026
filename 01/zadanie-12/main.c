#include <stdio.h>

int main()
{
	int n,i,suma=0;
	printf("Podaj n: \n");
	scanf("%i",&n);
	for(i=0;i<n;i++)
		suma+=i;

	printf("Suma wszystkich liczb naturalnych mniejszej od n wynosi: %i\n",suma);

	return 0;
}
