#include <stdio.h>

#define WYSWIETLANY_ZNAK '*'

int main() {
    
unsigned int liczba_wierszy, liczba_znakow, wiersz, kolumna; 


printf("Podaj liczbe wierszy: ");
scanf("%d", &liczba_wierszy);
    
printf("Podaj liczbe znakow: ");
scanf("%d", &liczba_znakow);
    
for (wiersz = 1; wiersz <= liczba_wierszy; wiersz++) {
    for (kolumna = 1; kolumna <= liczba_znakow; kolumna++){
        printf("%c", WYSWIETLANY_ZNAK);
    }
    printf("\n");
    }
return 0;
}
