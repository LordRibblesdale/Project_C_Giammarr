/*
   Scrivere un programma che genera 1000 numeri random compresi tra -100 e 100 e scrive in output:
      quanti sono rispettivamente i numeri positivi/negativi/nulli
      quanti sono rispettivamente i numeri pari/dispari
      quante coppie di numeri consecutivi uguali sono state generate
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
   int a, neg = 0, pos = 0, null = 0, par = 0, dis = 0, cop = 0;

   for (int i = 0; i < 1000; i++) {
      a = (rand() % 200) - 100;

      if (a != abs(a)) {
         neg++;
      } else if (a == 0) {
         null++;
      } else {
         pos++;
      }

      if (a % 2 == 0) {
         par++;
      } else {
         dis++;
      }
   }

   printf("Positivi: %d, Negativi: %d, Nulli: %d, Pari: %d, Dispari: %d.", pos, neg, null, par, dis);

   return 0;
}
