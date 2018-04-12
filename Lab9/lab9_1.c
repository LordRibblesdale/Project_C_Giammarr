/*
 * Scrivere un programma che:
    Genera un vettore random di 30 valori interi tra 15 e 85.
    Lo stampa sullo schermo (ben formattato, es. 10 numeri per riga).
    Calcola la media (restituisce il valore corrispondente)
    Calcola il valore minimo (restituisce l'indice)
    Controlla se ci sono due elementi consecutivi uguali (restituisce l'indice del primo dei due oppure -1 se non ci sono)
    Controlla se tutti gli elementi sono distinti (restituisce 1 oppure 0)
    Calcola il valore max e il secondo max modificando i due parametri passati per riferimento.
 * Ognuno dei punti precedenti deve essere svolto con una funzione.
**/
#include <stdio.h>
#include <stdlib.h>
#define SIZE = 30

int main(void) {
   int a[SIZE];
   int sum = 0, min = 86, index = -1;

   for (int i = 0; i < SIZE; i++) {
      a[i] = (rand() % 60 + 16);

      printf("%2d ", a[i]);

      if ((i - 9) % 10 == 0) {
         printf("\n");
      }

      sum += a[i];

      if (min > a[i]) {
         min = a[i];
         index = 1;
      }

      if (i != 0) {
         if (a[i-1] == a[i]) {
            printf("All'indice %d %d sono consecutivi", i, a[i]);
         }
      }
   }
}
