#include <stdio.h>
int main() {
 int numero1, numero2;  //  variabili per i numeri inseriti
   float media;          //  variabile per la media
 printf("Calcoliamo la media di due numeri.\n");
 //  scrivere il primo numero
   printf("Inserisci il primo numero: ");
   scanf("%d", &numero1);
 //  scrivere il secondo numero
   printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
 //  media dei due numeri
   media = (numero1 + numero2) / 2;  // Ora usiamo '2' invece di '2.0'
    printf("La media dei due numeri è: %.2f\n", media);
    return 0;
}







