/*
   Scrivere un programma che richiede l'inserimento di 10 numeri interi e alla fine scrive sullo schermo quanti numeri pari sono stati inseriti.
*/

#include <stdio.h>

int main() {
   int input, i = 0, j = 0;

   while (i < 10) {
      printf("Insert number: ");
      scanf("%d", &input);

      if (input % 2 == 0) {
         j++;
      }

      i++;
   }

   printf("n %% 2 == 0 -> %d", j);

   return 0;
}
