#include <stdio.h>

int main()
{
	unsigned int n;
	printf("Podaj do ktorego n fibonnaci: ");
	scanf("%u",&n);

	printf("%u wyraz ciagu Fibonnacciego to: %i\n",n,fib(n));

	return 0;
}

int fib(unsigned int n)
{
	if(n==0) return 0;
	if(n==1) return 1;

	return fib(n-1)+fib(n-2);
}
