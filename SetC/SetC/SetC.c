#include <stdio.h>

/*
int main() {
    int n, i, j, broj, suma = 0;
    int polje[3][3];

    do {
        printf("Unesite broj n (n < 4): ");
        scanf_s("%d", &n);
    } while (n >= 4 || n < 1);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Unesite element [%d][%d]: ", i, j);
            scanf_s("%d", &polje[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            broj = polje[i][j];
            if ((broj >= 10 && broj <= 99) || (broj <= -10 && broj >= -99)) {
                suma += broj;
            }
        }
    }

    printf("Zbroj svih dvoznamenkastih brojeva u polju je: %d\n", suma);

    return 0;
}*/

/*
int main() {
    int n, i, j;
    float polje[4][4];
    float max, min;

    do {
        printf("Unesite broj n (n < 5): ");
        scanf_s("%d", &n);
    } while (n >= 5 || n < 1);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Unesite element [%d][%d]: ", i, j);
            scanf_s("%f", &polje[i][j]);
        }
    }

    max = polje[0][0];
    min = polje[0][0];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (polje[i][j] > max) max = polje[i][j];
            if (polje[i][j] < min) min = polje[i][j];
        }
    }

    printf("Razlika najveceg i najmanjeg elementa je: %.2f\n", max - min);

    return 0;
}*/

int main() {
    int n, i;
    float polje[5][5];
    float umnozak = 1;
    int imaPozitivnih = 0;

    do {
        printf("Unesite broj n (2 < n < 5): ");
        scanf_s("%d", &n);
    } while (n <= 2 || n >= 5);

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Unesite element [%d][%d]: ", i, j);
            scanf_s("%f", &polje[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        if (polje[i][i] > 0) {
            umnozak *= polje[i][i];
            imaPozitivnih = 1;
        }
    }

    if (imaPozitivnih) {
        printf("Umnozak svih pozitivnih brojeva na glavnoj dijagonali: %.2f\n", umnozak);
    }
    else {
        printf("Nema pozitivnih brojeva na glavnoj dijagonali.\n");
    }

    return 0;
}