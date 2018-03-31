/*
   Scrivere un programma per risolvere il seguente quesito:
      "Esiste un numero formato da 8 cifre che moltiplicato per un numero primo dà come risultato un numero di 9 cifre uguali?".
   (utilizzare funzione dell'esercizio precedente per testare se il numero è primo).
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
   bool isFound = false;
   unsigned long i = 10000000;

   while(!isFound && i < 100000000) {
      for (int j = 2; (i*j) < 100000000; j++) {
         if ((i*j) % 11111111 == 0) {
            printf("Esiste");
            isFound = true;
         }
      }
   }

   if (!isFound) {
      printf("Boh");
   }
}
