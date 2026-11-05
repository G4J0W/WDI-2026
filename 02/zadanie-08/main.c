#include <stdio.h>

int main()
{
	int a,b;
	printf("Podaj liczbe a: ");
	scanf("%i",&a);
	printf("Podaj liczbe b: ");
	scanf("%i",&b);

	printf("Wieksza z liczb %i , %i jest %i\n",a,b,max(a,b));
	printf("Mniejsza z liczb %i , %i jest %i\n",a,b,min(a,b));

	return 0;
}

int max(int a, int b)
{
	if(a>b)	return a;
	if(b>a) return b;
	if(a==b) return a;
}

int min(int a, int b)
{
	if(a<b)	return a;
	if(b<a) return b;
	if(a==b) return a;
}
