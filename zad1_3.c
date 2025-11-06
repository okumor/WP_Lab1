#include <stdio.h>

int main() {

    double wartosc;
    printf("Podaj wartosc temp.:\n");
    scanf("%lf", &wartosc);

    int temp;
    printf("Wybierz przelicznik klikajac 1-> C na F, 2 -> F na C):");
    scanf("%d", &temp);

    if ( temp == 1)
    {
        double wynik = wartosc * 1.8 + 32;
        printf("twoja wartosc to: %.2f\n", wynik);


    }
    else if (temp ==2) {
        double wyniko = (wartosc - 32) /1.8;
        printf("twoja wartosc to: %.2f\n", wyniko);
    }

    else {
        printf("blad\n");
   
    }
return 0;
    
    }
