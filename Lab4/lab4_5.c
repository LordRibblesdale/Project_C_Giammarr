/*
   Scrivere un programma che richiede all'utente di inserire un numero di 7 cifre
    (inserire un controllo sull'input) e restituisce in output
    la massima potenza di 7 che divide il numero.
   L'output dovrà essere del tipo:
      Il numero inserito e' ... e la massima potenza di 7 che lo divide e' .....
*/

#include <stdio.h>
#include <math.h>

int main(void) {
   long input, tmp1, tmp2, i = 0;

   do {
      printf("Insert number [xxxxxxx]: ");
      scanf("%ld", &input);
   } while (input <= 1000000 || input >= 10000000);

   tmp2 = pow(7, i);
   while (input > tmp2) {
       printf("%ld\n", tmp2);
       if (input % (long)(pow(7,i)) == 0) {
           tmp1 = i;
       }
       tmp2 = pow(7, ++i);
   }

   printf("Il numero inserito e' %ld e la massima potenza di 7 che lo divide e' %ld\n", input, tmp1);
}
