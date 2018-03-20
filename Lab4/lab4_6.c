/*
   Scrivere un programma che produce in output (scritte una sotto l'altra)
   tutte le permutazioni dei numeri 1,2,3,4,5.
*/

#include <stdio.h>

int main(void) {
   int count = 0;

   for (int a = 1; a < 6; a++) {
      for (int b = 1; b < 6; b++) {
         for (int c = 1; c < 6; c++) {
            for (int d = 1; d < 6; d++) {
               for (int e = 1; e < 6; e++) {
                  if (a != b && a != c && a != d && a != e
                        && b != c && b != d && b != e
                        && c != d && c != e
                        && d != e) {
                     printf("%d %d %d %d %d\n", a, b, c, d, e);
                     count++;
                  }
               }
            }
         }
      }
   }

   printf("%d\n", count);
   return 0;
}
