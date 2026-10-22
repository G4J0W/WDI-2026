#include <stdio.h>

int main()
{
	unsigned int s,x;
	printf("Podaj liczbe sekund (DUZO):\n");
	scanf("%i",&s);
	int hour,min,sec;
	x=s;
	
	hour = x/3600;
	min = (x-(hour*3600))/60;
	sec = x-(hour*3600)-(min*60);

	printf("Same sekundy: %i\n\n",s);
	printf("Godziny: %i\n",hour);
	printf("Minuty: %i\n",min);
	printf("Sekundy: %i\n",sec);

	return 0;
}
