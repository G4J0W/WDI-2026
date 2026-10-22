#include <stdio.h>

int main()
{
	char f_name;
	int age;
	printf("Podaj pierwsza litere imienia: \n");
	scanf("%c",&f_name);
	printf("Podaj swoj wiek: \n");
	scanf("%i",&age);

	printf("Inicjal: %c, wiek: %i\n",f_name,age);

	return 0;
}
