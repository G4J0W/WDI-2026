#include <stdio.h>

int main()
{
	int i,sum=0,temp;
	for(i = 0;i<5;i++)
	{
		printf("Podaj ocene: %i\n",i+1);
		scanf("%i",&temp);
		sum+=temp;
	}
	float avg =(float)sum/5;
	printf("Srednia 5 ocen wynosi: %f\n",avg);

	return 0;
}
