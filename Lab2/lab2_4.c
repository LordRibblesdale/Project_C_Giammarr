/*
   Scrivere un programma che richiede l'inserimento di 10 numeri interi e alla fine scrive sullo schermo il valore massimo che e' stato inserito
*/

#include <stdio.h>

int main() {
   int input, max = 0, i = 0;

   while (i < 10) {
      printf("Insert a number: ");
      scanf("%d", &input);

      if (i == 0) {
         max = input;
      } else if (input > max) {
         max = input;
      }

      i++;
   }

   printf("Max num = %d", max);

   return 0;
}
