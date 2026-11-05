#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
        int x,y,ans;
        float f_ans;
        char operator;

        printf("\n================================\n");
        printf("       WITAJ W KALKULATORZE 2\n");
        printf("================================\n\n");

        printf("Podaj pierwsza liczbe: ");
        scanf("%i",&x);

        printf("Podaj druga liczbe: ");
        scanf("%i",&y);

        while(TRUE)
        {
                printf("\n================================\n");
                printf("          KALKULATOR 2\n");
                printf("================================\n\n");

                printf("  Liczba 1: %i\n",x);
                printf("  Liczba 2: %i\n",y);

                printf("\n--------------------------------\n");
                printf("       WYBIERZ OPERACJE\n");
                printf("--------------------------------\n\n");

                printf("  [+] Dodawanie\n");
                printf("  [-] Odejmowanie\n");
                printf("  [*] Mnozenie\n");
                printf("  [/] Dzielenie\n");
                printf("  [%%] Modulo\n\n");

                printf("  [1] Zmien liczbe 1\n");
                printf("  [2] Zmien liczbe 2\n");

		printf("  [Q] Zakoncz program\n");

                printf("\n--------------------------------\n");
                printf("  Twoj wybor: ");

                scanf(" %c",&operator);

                printf("\n");

                switch(operator)
                {
                        case '1':
                                printf("Podaj nowa wartosc liczby 1: ");
                                scanf("%i",&x);
                                break;

                        case '2':
                                printf("Podaj nowa wartosc liczby 2: ");
                                scanf("%i",&y);
                                break;

                        case '+':
                                ans=x+y;
                                printf(" [WYNIK] %i + %i = %i\n",x,y,ans);
                                break;

                        case '-':
                                ans=x-y;
                                printf(" [WYNIK] %i - %i = %i\n",x,y,ans);
                                break;

                        case '*':
                                ans=x*y;
                                printf(" [WYNIK] %i * %i = %i\n",x,y,ans);
                                break;

                        case '/':
                                if(y==0)
                                {
                                        printf(" [BLAD] Nie wolno dzielic przez zero!\n");
                                        break;
                                }

                                f_ans=(float)x/(float)y;
                                printf(" [WYNIK] %i / %i = %.2f\n",x,y,f_ans);
                                break;

                        case '%':
                                if(y==0)
                                {
                                        printf(" [BLAD] Nie wolno wykonywac modulo przez zero!\n");
                                        break;
                                }

                                ans=x%y;
                                printf(" [WYNIK] %i %% %i = %i\n",x,y,ans);
                                break;
			case 'Q':
			case 'q':
				return 0;

                        default:
                                printf(" [BLAD] Podano nieprawidlowy znak!\n");
                }
        }

        return 0;
}
