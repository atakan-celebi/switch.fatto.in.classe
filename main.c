#include <stdio.h>


int main() {
    float prezzo;
    int casi;
    prezzo = 4;
    printf("rispondere alla domanda per un potenziale sconto\n");
    printf("premere:1 per lo sconto dei pensionati\n");
    printf("premere:2 per lo sconto degli studenti\n");
    printf("premere:3 per lo sconto per i disoccupati\n");
    printf("premere:4 se nessuno delle ultime\n");
    scanf("%d",&casi);
    switch (casi) {
        case 1: prezzo = prezzo-(prezzo*0.1);
        break;
        case 2: prezzo = prezzo-(prezzo*0.15);
        break;
        case 3: prezzo = prezzo-(prezzo*0.25);
        break;
        case 4:
            break;
    }
    printf("il costo del biglietto e' di %.2f",prezzo);
}

