/*
   Scrivere un programma che richiede all'utente di inserire 5 numeri interi e poi scrive sullo schermo la somma e la media.
*/

#include <stdio.h>

int main() {
   int input, sum = 0, i = 0;

   while (i < 5) {
      printf("Insert number: ");
      scanf("%d", &input);
      sum += input;

      i++;
   }

   printf("\nSum = %d\nAverage = %d", sum, sum/5);

   return 0;
}
