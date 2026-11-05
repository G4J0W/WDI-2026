#include <stdio.h>

int main()
{
	const unsigned granica = 20U;
	unsigned i,suma=0;
	for(i=1;i<=granica;i++)
	{
		if(i%3==0)
			suma+=i;
	}
	printf("Suma wynosi:  %u\n",suma);
	return 0;
}
