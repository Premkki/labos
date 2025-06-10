#include <stdio.h>

/*
int main() {
    int broj;

    do {
        printf("Unesite troznamenkasti cijeli broj: ");
        scanf_s("%d", &broj);
    } while (broj < 100 || broj > 999);

   
    int stotinke = broj / 100;
    int desetice = (broj / 10) % 10;
    int jedinice = broj % 10;

    int max, a, b;

    if (stotinke >= desetice && stotinke >= jedinice) {
        max = stotinke;
        a = desetice;
        b = jedinice;
    }
    else if (desetice >= stotinke && desetice >= jedinice) {
        max = desetice;
        a = stotinke;
        b = jedinice;
    }
    else {
        max = jedinice;
        a = stotinke;
        b = desetice;
    }

    printf("Najveca znamenka: %d\n", max);
    printf("Umnozak preostale dvije znamenke: %d\n", a * b);

    return 0;
}
*/

/*
int main() {
    int n, i, broj;
    int brojac = 0;

    do {
        printf("Unesite broj n (5 < n <= 20): ");
        scanf_s("%d", &n);
    } while (n <= 5 || n > 20);

    for (i = 0; i < n; i++) {
        printf("Unesite broj %d: ", i + 1);
        scanf_s("%d", &broj);

        if (broj % 7 == 0 && broj > 15) {
            brojac++;
        }
    }

    printf("Brojeva djeljivih sa 7 i veæih od 15: %d\n", brojac);

    return 0;
}*/

int main() {
    char znak1, znak2;
    int i;

    printf("Unesite prvi znak: ");
    scanf_s(" %c", &znak1);  
    printf("Unesite drugi znak: ");
    scanf_s(" %c", &znak2);

    if (znak1 < znak2) {
        for (i = znak1 + 1; i < znak2; i++) {
            printf("%c ", i);
        }
    }
    else if (znak2 < znak1) {
        for (i = znak2 + 1; i < znak1; i++) {
            printf("%c ", i);
        }
    }
    else {
        printf("Uneseni znakovi su isti. Nema znakova izmeðu.\n");
    }

    return 0;
}