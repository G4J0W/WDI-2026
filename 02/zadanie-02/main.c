#include <stdio.h>

int main()
{
	int n,i,sum=0;
	printf("Podaj n z zakresu <1;100>:\n");
	scanf("%i",&n);
	if(n<1 || n>100)
	{
		printf("N jest z poza zakresu :(\n");
		return 0;
	}

	for(i=1;i<=n;i++)
	{
		sum+=(i*i);
	}
	printf("Sum => %i\n",sum);
	return 0;
}
