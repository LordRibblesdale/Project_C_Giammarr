/*
   Scrivere una funzione che, dato un numero intero positivo, calcola se e' un numero primo
    (non stampa messaggio ma restituisce valore booleano).
   Scrivere poi un programma, che utilizza questa funzione, che scrive sullo schermo tutti i numeri primi <1000.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int value) {
   int count = 0;
   for (int i = 2; i <= value / 2) {
      if (value % i == 0) {
         count++;
      }
   }

   if (count == 0) {
      return true;
   } else {
      return false;
   }
}

int main(void) {
   for (int i = 0; i < 1000; i++) {
      if (isPrime(i)) {
         printf("%d e' un numero primo", i);
      } else {
         printf("%d non e' un numero primo", i);
      }
   }

   return 0;
}
