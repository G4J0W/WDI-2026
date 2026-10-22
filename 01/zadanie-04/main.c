#include <stdio.h>

int main()
{
	int x,y,z,sum,diff,iloczyn;
	float iloraz;
	printf("Podaj mi 3 liczby calkowite:\n");
	scanf("%i",&x);
	scanf("%i",&y);
	scanf("%i",&z);

	sum = x+y+z;
	diff = x - y;
	iloczyn = x*z;

	iloraz = (float)z/(float)y;

	printf("Suma: %i\n",sum);
	printf("Roznica: %i\n",diff);
	printf("Iloczyn: %i\n",iloczyn);
	printf("Iloraz: %f\n",iloraz);

	return 0;
}
