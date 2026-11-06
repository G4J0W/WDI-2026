#include <stdio.h>

int main()
{
	unsigned int n,i,suma=0;
	printf("Podaj do ktorego n chcesz sume ciagu fionacciego: ");
	scanf("%u",&n);

	for(i=0;i<=n;i++)
	{
		suma+=fib(i);
	}

	printf("Suma %u wyrazow ciagu Fibonnacciego to: %i\n",n,suma);

	return 0;
}

int fib(unsigned int n)
{
	if(n==0) return 0;
	if(n==1) return 1;

	return fib(n-1)+fib(n-2);
}
