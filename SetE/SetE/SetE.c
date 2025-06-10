#include <stdio.h>
#define PI 3.141592653589793

/*
double Stozac(double r, double h) {
    return (1.0 / 3.0) * PI * r * r * h;
}

int main() {
    double r, h, volumen;

    printf("Unesite polumjer (r): ");
    scanf_s("%lf", &r);

    printf("Unesite visinu (h): ");
    scanf_s("%lf", &h);

    volumen = Stozac(r, h);
    printf("Volumen stozca je: %.2f\n", volumen);

    return 0;
}*/

/*
int Znamenke(int n) {
    if (n >= 0 && n <= 9)
        return 1;
    else if (n >= 10 && n <= 99)
        return 2;
    else
        return 3;
}

int main() {
    int n, rezultat;

    printf("Unesite pozitivan cijeli broj: ");
    scanf_s("%d", &n);

    if (n < 0) {
        printf("Unesen je negativan broj.\n");
        return 1;
    }

    rezultat = Znamenke(n);
    printf("Funkcija je vratila vrijednost: %d\n", rezultat);

    return 0;
}*/

double Srednja(int x, int y) {
    int suma = 0, broj = 0;
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    for (int i = x + 1; i < y; i++) {
        if (i % 2 == 0) {
            suma += i;
            broj++;
        }
    }
    if (broj == 0) return 0;
    return (double)suma / broj;
}

int main() {
    int x, y;
    printf("Unesite dva cijela broja x i y: ");
    scanf_s("%d %d", &x, &y);

    double rezultat = Srednja(x, y);
    if (rezultat == 0)
        printf("Nema parnih brojeva izmeðu %d i %d.\n", x, y);
    else
        printf("Srednja vrijednost parnih brojeva izmeðu %d i %d je: %.2f\n", x, y, rezultat);

    return 0;
}