#include <stdio.h>

/*
int main() {
    int n, i;
    int polje[20];
    int suma = 0;
    float srednja;
    int manji_neparni = 0, veci_neparni = 0;

    do {
        printf("Unesite broj elemenata (1 < n <= 20): ");
        scanf_s("%d", &n);
    } while (n <= 1 || n > 20);

    for (i = 0; i < n; i++) {
        printf("Unesite element %d: ", i + 1);
        scanf_s("%d", &polje[i]);
        suma += polje[i];
    }

    srednja = (float)suma / n;

    printf("\nParni elementi veci od srednje vrijednosti (%.2f):\n", srednja);
    for (i = 0; i < n; i++) {
        if (polje[i] % 2 == 0 && polje[i] > srednja) {
            printf("%d ", polje[i]);
        }
    }

    for (i = 0; i < n; i++) {
        if (polje[i] % 2 != 0) {
            if (polje[i] < srednja) {
                manji_neparni++;
            }
            else if (polje[i] > srednja) {
                veci_neparni++;
            }
        }
    }

    printf("\nBroj neparnih brojeva manjih od srednje vrijednosti: %d\n", manji_neparni);
    printf("Broj neparnih brojeva vecih od srednje vrijednosti: %d\n", veci_neparni);

    return 0;
}*/

/*
int main() {
    int n, i;
    float polje[50];

    do {
        printf("Unesite broj elemenata (5 <= n < 50): ");
        scanf_s("%d", &n);
    } while (n < 5 || n >= 50);

    for (i = 0; i < n; i++) {
        printf("Unesite element %d: ", i + 1);
        scanf_s("%f", &polje[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        int cijeli_dio = (int)polje[i];
        if (cijeli_dio % 2 == 0) {
            printf("%.2f ", polje[i] * 2);
        }
        else {
            printf("%.2f ", polje[i]);
        }
    }

    return 0;
}*/

int main() {
    int n, i, count_interval2 = 0;
    float polje[77];
    float suma_interval1 = 0, suma_interval2 = 0, srednja;

    do {
        printf("Unesite broj elemenata (7 < n < 77): ");
        scanf_s("%d", &n);
    } while (n <= 7 || n >= 77);

    for (i = 0; i < n; i++) {
        printf("Unesite element %d: ", i + 1);
        scanf_s("%f", &polje[i]);
    }

    for (i = 0; i < n; i++) {
        if (polje[i] >= -10 && polje[i] <= 10) {
            suma_interval1 += polje[i];
        }
        if (polje[i] >= 30 && polje[i] <= 40) {
            suma_interval2 += polje[i];
            count_interval2++;
        }
    }

    if (suma_interval1 == 0) {
        printf("Nema elemenata unutar intervala [-10, 10].\n");
    }
    else {
        printf("Zbroj elemenata unutar intervala [-10, 10]: %.2f\n", suma_interval1);
    }

    if (count_interval2 == 0) {
        printf("Nema elemenata unutar intervala [30, 40].\n");
    }
    else {
        srednja = suma_interval2 / count_interval2;
        printf("Srednja vrijednost elemenata unutar intervala [30, 40]: %.2f\n", srednja);
    }

    return 0;
}
