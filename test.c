#include <stdio.h>
int main() 
{
 
  int numero1 , numero2 ;  //  variabili per i numeri inseriti
  int prodotto;         //  variabile per il prodotto
        printf("Calcoliamo la moltiplicazione tra due numeri.\n");
        printf("Inserisci il primo numero: ");
        scanf("%d", &numero1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &numero2 );
         prodotto = numero1 * numero2;
        printf("Il prodotto dei due numeri è: %d\n", prodotto);
        return 0;
 }
   