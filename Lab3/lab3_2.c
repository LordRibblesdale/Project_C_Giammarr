/*
   Scrivere un programma che legge da tastiera sequenza di numeri interi positivi.
   L'immissione termina quando l'utente inserisce il valore 0.
   In output viene riportato se la sequenza inserita conteneva due o piu'
      valori consecutivi uguali.
      Variante: In output viene riportato il numero di volte che nella sequenza
      compaiono due numeri consecutivi uguali.
*/

#include <stdio.h>

int main(void) {
   unsigned int input1, input2, i = 0;

   printf("Insert a number: [positive] ");
   scanf("%d", &input1);
   printf("Reinsert number: [positive, if 0 -> stops] ");
   scanf("%d", &input2);

   while (input2 != 0) {
      if (input1 == input2) {
         printf("Combination: %d\n", input2);
         i++;
      }
      input1 = input2;
      printf("Reinsert number: [positive, if 0 -> stops] ");
      scanf("%d", &input2);
   }

   printf("Number of combination: %d\n", i);
   
   return 0;
}
