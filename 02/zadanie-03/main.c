#include <stdio.h>

int main()
{
	float a,b;
	char ch;

	printf("Witaj W Kalkulator\nPodaj pierwsza liczbe: \n");
	scanf("%f",&a);
	printf("Podaj druga liczbe: \n");
	scanf("%f",&b);
	printf("Podaj znak operacji (+,-,/,*,%%)\n");
	scanf(" %c",&ch);

	switch(ch)
	{
		case '+':
			printf("Wynik dodawania %f i %f wynosi: %f\n",a,b,a+b);
			break;
		case '-':
			printf("Wynik odejmowania %f i %f wynosi: %f\n",a,b,a-b);
			break;
		case '*':
			printf("Wynik mnozenia %f i %f wynosi: %f\n",a,b,a*b);
			break;
		case '/':
			if(b==0)
			{
				printf("Nie wolno dzielic przez zero\n");
				break;
			}
			printf("Wynik dzielenia %f i %f wynosi: %f\n",a,b,a/b);
			break;
		case '%':
			printf("Wynik modulo %i i %i wynosi: %f\n",(int)a,(int)b,(int)a%(int)b);
			break;
		default:
			printf("Podano zly znak\n");
	}

	return 0;
}
