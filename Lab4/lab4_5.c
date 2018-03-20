/*
   Scrivere un programma che richiede all'utente di inserire un numero di 7 cifre
    (inserire un controllo sull'input) e restituisce in output
    la massima potenza di 7 che divide il numero.
   L'output dovrà essere del tipo:
      Il numero inserito e' ... e la massima potenza di 7 che lo divide e' .....
*/

#include <stdio.h>

int main(void) {
   double input, i = 1, tmp = 0;

   do {
      printf("Insert number [xxxxxxx]: ");
      scanf("%lf", &input);
   } while (input <= 1000000 || input >= 10000000);

   while ((7^(int)(i)) < input) {
      if ((int)(input) % (7^(int)(i)) == 0) {
         tmp = i;
      }
      i++;
   }

   printf("Il numero inserito e' %f e la massima potenza di 7 che lo divide e' %f\n", input, tmp);
}
