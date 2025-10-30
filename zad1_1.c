#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia;
    printf("Podaj rok urodzenia:");
    scanf("%d", &rok_urodzenia);

   int wzrost;
   printf("Podqaj wzrost:");
   scanf("%d", &wzrost);

   printf("Mam %d wzrostu, urodzony %d", wzrost, rok_urodzenia);

   int wiek = 2025 - rok_urodzenia;
   printf("mam %d lat", wiek);

    return 0;
}
