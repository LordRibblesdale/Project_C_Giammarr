/*
   Scrivere un programma che richiede all'utente di inserire 10 numeri interi
      compresi tra 1 e 100 (estremi inclusi), ne calcola la somma e la scrive sullo schermo.
      Attenzione: ogni volta che l'utente inserisce un valore errato (fuori dall'intervallo previsto)
         il programma dovra' segnalare l'errore e richiedere un altro numero...
          il ciclo di immissione termina SOLO quando sono stati immessi 10 numeri VALIDI.
*/

#include <stdio.h>

int main() {
   int input, sum = 0, i = 0;

   while (i < 10) {
      printf("Insert a number: [1-100] ");
      scanf("%d", &input);

      if (input < 1 || input > 100) {
         printf("Value denied...");
      } else {
         sum += input;
         i++;
      }
   }

   printf("Sum = %d", sum);

   return 0;
}
