/*
   Scrivere un programma che calcola quanti sono i triangoli rettangoli con lati interi ≤ 500.
   Opzionale : produrre in input tutte le terne pitagoriche trovate.
*/

#include <stdio.h>

int main(void) {
   unsigned int count = 0;

   for (int x = 1; x <= 500; x++) {
      for (int y = x; y <= 500; y++) {
         for (int z = y; z <= 500; z++) {
            if (((x*x) + (y*y)) == (z*z)) {
               printf("%d^2 + %d^2 = %d^2\n", x, y, z);
               count++;
            }
         }
      }
   }

   printf("%d\n", count);

   return 0;
}
