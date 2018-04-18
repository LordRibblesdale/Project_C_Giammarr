/*
 * Crivello di Eratostene
 * Implementare una funzione che simula il crivello di Eratostene per il calcolo dei numeri primi.
 * Utilizzarla per calcolare tutti i numeri primi tra 2 e 1000.
**/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
   int a[1001];

   for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
      a[i] = true;
   }

   for (int i = 2; i < 1001; i++) {
      for (int j = 2; i*j < 1001; j++) {
         a[i*j] = false;
      }
   }

   for (int i = 2; i < sizeof(a)/sizeof(a[0]); i++) {
      if (a[i]) {
         printf("%d is prime\n", i);
      }
   }

   return 0;
}
