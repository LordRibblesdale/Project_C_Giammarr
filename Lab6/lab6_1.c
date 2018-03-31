/* Hackerino
   Def.: un numero si dice "perfetto" se è uguale alla somma dei suoi divisori (escluso il numero stesso).
   Scrivere una funzione che, dato un numero intero positivo, calcola se e' un numero perfetto
      (non stampa messaggio ma restituisce valore booleano).
   Scrivere poi un programma, che utilizza questa funzione, che scrive sullo schermo tutti i numeri perfetti <1000.
*/

#include <stdio.h>
#include <stdbool.h>

bool isPerfect(int value) {
   int sum = 0;

   for (int i = 1; i <= value / 2; i++) {
      if (value % i == 0) {
         sum += i;
      }
   }

   if (sum == value) {
      return true;
   } else {
      return false;
   }
}

int main(void) {
   for (int i = 1; i < 1000; i++) {
      if (isPerfect(i)) {
         printf("%d e' perfetto\n", i);
      } else {
         printf("%d non e' perfetto\n", i);
      }
   }

   return 0;
}
