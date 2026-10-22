#include <stdio.h>

int main()
{
	int a,b;
	printf("Podaj dwie liczby calkowite: \n");
	scanf("%i",&a);
	scanf("%i",&b);

	if(a>b)
	{
		printf("Wieksza: %i\n",a);	
		printf("Mniejsza: %i\n",b);
		printf("%i>%i\n",a,b);
	}
	else if(a<b)
	{
		printf("Wieksza: %i\n",b);
		printf("Mniejsza: %i\n",a);
		printf("%i<%i\n",a,b);
	}
	else 
	{
		printf("Sa rowne: %i=%i\n",a,b);
	}


	return 0;
}
