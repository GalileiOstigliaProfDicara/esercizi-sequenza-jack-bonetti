#include <stdio.h>

int main() {
    int percentuale_sconto;
    float prezzo, sconto_effettuato, prezzo_scontato;

    printf("inserisci il prezzo:");
    scanf("%f", &prezzo);

    printf("inserisci la percentuale di sconto:");
    scanf("%d", &percentuale_sconto);

    sconto_effettuato = prezzo * (percentuale_sconto/100);
    printf("lo sconto effettuato è %d\n, sconto_effettuato");

    prezzo_scontato = prezzo - sconto_effettuato;
    printf("il prezzo scontato è %d\n euro, prezzo_scontato");


    return 0;
}
