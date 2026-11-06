#include <stdio.h>

int round(double x);

int ceil(double x);

int floor(double x);

int main()
{
	double a = 2.7, b = -3.4, c = 5.0, d = -1.8;

	printf("Liczba: %.2f\n", a);
	printf("round: %d, ceil: %d, floor: %d\n\n", round(a), ceil(a), floor(a));

	printf("Liczba: %.2f\n", b);
	printf("round: %d, ceil: %d, floor: %d\n\n", round(b), ceil(b), floor(b));

	printf("Liczba: %.2f\n", c);
	printf("round: %d, ceil: %d, floor: %d\n\n", round(c), ceil(c), floor(c));

	printf("Liczba: %.2f\n", d);
	printf("round: %d, ceil: %d, floor: %d\n", round(d), ceil(d), floor(d));

	return 0;
}

int round(double x)
{
	if (x >= 0)
		return (int)(x + 0.5);
	else
		return (int)(x - 0.5);
}

int ceil(double x)
{
	if (x == (int)x)
		return (int)x;
	if (x < 0)
		return (int)x;
	return (int)x + 1;

}

int floor(double x)
{
	if (x < 0 && x != (int)x)
		return (int)x - 1;

	return (int)x;
}

