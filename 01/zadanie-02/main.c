#include <stdio.h>

int main()
{
	float x;
	printf("Podaj liczbe zmiennoprzecinkowa: \n");
	scanf("%f",&x);
	printf("Dokladnosc 1 => %.1f\n",x);
	printf("Dokladnosc 3 => %.3f\n",x);
	printf("Dokladnosc 5 => %.5f\n",x);

	return 0;
}
