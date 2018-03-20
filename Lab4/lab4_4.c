/*
   Scrivere un programma che stampa tutti i numeri interi tra 1 e 300 in righe
   contenenti 15 numeri ciascuna.
   I numeri devono essere ben incolonnati. Inoltre, se il numero termina per 7
   oppure è divibile per 7 NON deve essere stampato ed nel suo posto deve essere scritto BUM.
*/

#include <stdio.h>

int main(void) {
   for (int i = 1; i <= 300; i++) {
      if ((i % 7 == 0) || (((i - 7) % 10) == 0)) {
         printf("BUM ");
      } else {
         printf("%3d ", i);
      }

      if (i % 15 == 0) {
         printf("\n");
      }
   }
   printf("\n");

   return 0;
}
