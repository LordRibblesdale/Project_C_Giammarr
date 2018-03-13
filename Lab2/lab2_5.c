/*
   Scrivere un programma che richiede l'inserimento di una serie di numeri interi positivi;
      l'inserimento termina quando l'utente inserisce 0 o un valore negativo.
      Al termine dell'inserimento, sullo schermo viene scritta la somma dei numeri inseriti.
   Variante/Aggiunta: alla fine viene anche scritta la media dei valori inseriti.
*/

#include <stdio.h>

int main() {
   int input = 1, sum = 0, i = 0;

   while (input != 0) {
      printf("Insert a number: ");
      scanf("%d", &input);
      sum += input;
      i++;
   }

   if (sum == 0) {
      printf("No values. Closing..");
      return 0;
   } else {
      printf("Sum = %d\nAverage = %d", sum, sum/(i-1));
      return 0;
   }
}
