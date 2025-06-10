#include <stdio.h>
#include <string.h>

/*
int main() {
    char tekst[101];
    int i, duzina, brojA = 0;
    float postotak;

    printf("Unesite string (do 100 znakova): ");
    fgets(tekst, sizeof(tekst), stdin);

    duzina = strlen(tekst);
    if (tekst[duzina - 1] == '\n') {
        tekst[duzina - 1] = '\0';
        duzina--;
    }

    for (i = 0; i < duzina; i++) {
        if (tekst[i] == 'a' || tekst[i] == 'A') {
            brojA++;
        }
    }

    if (duzina > 0) {
        postotak = ((float)brojA / duzina) * 100;
        printf("Slovo 'a' se pojavljuje %d puta i cine %.2f%% od ukupnog broja znakova.\n", brojA, postotak);
    }
    else {
        printf("Unesen je prazan string.\n");
    }

    return 0;
}*/

/*
int main() {
    char tekst[101];
    int i, duzina;
    int count_a = 0, count_A = 0;

    printf("Unesite string (do 100 znakova): ");
    fgets(tekst, sizeof(tekst), stdin);

    duzina = strlen(tekst);
    if (tekst[duzina - 1] == '\n') {
        tekst[duzina - 1] = '\0';
        duzina--;
    }

    for (i = 0; i < duzina; i++) {
        if (tekst[i] == 'a') {
            count_a++;
        }
        else if (tekst[i] == 'A') {
            count_A++;
        }
    }

    if (count_a > count_A) {
        printf("Malo slovo 'a' se pojavilo vise puta: %d puta.\n", count_a);
    }
    else if (count_A > count_a) {
        printf("Veliko slovo 'A' se pojavilo vise puta: %d puta.\n", count_A);
    }
    else {
        printf("Slova 'a' i 'A' su se pojavila jednako puta: %d puta.\n", count_a);
    }

    return 0;
}*/

int main() {
    char tekst[51];
    int i, duzina, count = 0;

    printf("Unesite string (do 50 znakova): ");
    fgets(tekst, sizeof(tekst), stdin);

    duzina = strlen(tekst);
    if (tekst[duzina - 1] == '\n') {
        tekst[duzina - 1] = '\0';
        duzina--;
    }

    for (i = 0; i < duzina; i++) {
        char c = tekst[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    printf("Broj samoglasnika u stringu je: %d\n", count);

    return 0;
}