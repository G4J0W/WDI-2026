#include <stdio.h>

int fun(unsigned int n);

int main()
{
	unsigned int n;
	printf("Podaj ktory wyraz ciagu: ");
	scanf("%u",&n);
	printf("%u wyraz ciagu to: %i\n",n,fun(n));

	return 0;
}

int fun(unsigned int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 3;

	return fun(n-1)*fun(n-2)-fun(n-3);
}
