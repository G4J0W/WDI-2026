#include <stdio.h>

int main()
{
	int ocena,ndst=0,i,suma=0;
	float srednia;

	for(i=0;i<5;i++)
	{
		printf("Podaj %i liczbe: \n",i+1);
		scanf("%i",&ocena);
		if(ocena<1 || ocena >6)
		{
			i--;
			continue;
		}
		if(ocena==1)
			ndst++;
		suma+=ocena;
	}
	srednia=(float)suma/5;
	printf("Srednia ocen wynosi %f i bylo %i ocen niedostatecznych\n",srednia,ndst);

	return 0;
}
