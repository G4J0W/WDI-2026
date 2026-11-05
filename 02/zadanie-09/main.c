#include <stdio.h>

int main()
{
	int n;
	qwe:
	printf("Podaj do ktorej silni chcesz wynik: ");
	scanf("%i",&n);
	if(silnia(n)==-1)
	{
		printf("Podane n jest mniejsze od zera co jest bledne. Podaj ponownie.");
		goto qwe;
	}
	printf("Silnia z %i wynosi: %i\n",n,silnia(n));

	return 0;
}

int silnia(int n)
{
	int i,suma=0;
	if(n<0)
		return -1;
	for(i=0;i<=n;i++)
	{
		if(i==0)
		{
			suma=1;
			continue;
		}
		suma=suma*i;
	}
	return suma;
}
