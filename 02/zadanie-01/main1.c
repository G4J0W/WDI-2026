#include <stdio.h>

int main()
{
    int x, max, min, suma = 0, licznik = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &x);

    while(x % 2 != 0)
    {
        if(licznik == 0)
        {
            max = x;
            min = x;
        }

        if(x > max) max = x;
        if(x < min) min = x;

        suma += x;
        licznik++;

        printf("Podaj kolejna liczbe: ");
        scanf("%d", &x);
    }

    if(licznik > 0)
    {
        printf("Najwieksza: %d\n", max);
        printf("Najmniejsza: %d\n", min);
        printf("Suma: %d\n", suma);
        printf("Srednia: %.2f\n", (double)suma / licznik);
    }
    else
        printf("Nie podano zadnej liczby do obliczenia.\n");

    return 0;
}
