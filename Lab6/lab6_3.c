/*
   Scrivere un programma per risolvere il seguente quesito:
      "Esiste un numero formato da 8 cifre che moltiplicato per un numero primo dà come risultato un numero di 9 cifre uguali?".
   (utilizzare funzione dell'esercizio precedente per testare se il numero è primo).
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int value) {
   int count = 0;
   for (int i = 2; i <= value / 2; i++) {
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
   bool isFound = false;
   unsigned long long i = 10000000;

   while(!isFound && i < 100000000) {
      for (long j = 2; (i*j) < 1000000000; j++) {
         if ((i*j) % 111111111 == 0) {
            printf("\nEsiste\n");
            isFound = true;
         }
         printf("%lld\n", (i*j));
      }
      i++;
   }

   if (!isFound) {
      printf("Boh");
   }
}
