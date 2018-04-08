/*
 * Scrivere un programma che: simula una successione di lanci di moneta (Testa o Croce);
 * continua a generare lanci di moneta fino a che è verificata la seguente condizione di terminazione:
 *  la sequenza generata contiene almeno 5 esiti uguali consecutivi (es: 5 volte Testa, oppure 5 volte Croce).
 * Il programma deve stampare "testa" o "croce" relativa ad ogni lancio e alla fine restituire il numero di lanci di moneta
 *  che sono stati necessari per verificare la condizione di terminazione.
**/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int i = 0, j = 0, tmp1 = rand() % 2, tmp2;

   while (i < 5) {
      tmp2 = rand() % 2;
      printf("%d %d\n", tmp1, tmp2);
      if (tmp1 == tmp2) {
         i++;
      } else {
         i = 0;
      }
      tmp1 = tmp2;
      j++;
   }

   printf("Tiri necessari: %d", j);
}
