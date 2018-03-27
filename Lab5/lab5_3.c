/*
   Un numero naturale n si dice quadratoso  se è un quadrato perfetto ed inoltre cancellando ad n una delle sue cifre
      si ottiene ancora un quadrato perfetto.
   Ad esempio 1369 è quadratoso  infatti 1369=37^2  e, cancellando la cifra 3, si ottiene 169=13^2 .
   Analogamente 2025= 45^2  è quadratoso  infatti eliminando la prima cifra si ottiene 025 = 25 = 5^ 2 .
   Scrivere un programma che scrive in output tutti i numeri quadratosi di 4 cifre.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
   unsigned int in;

   do {
      printf("Insert number: ");
      scanf("%d", &in);
   } while (in < 1000 || in >= 10000);

   if ((int)pow((int)sqrt(in), 2) == in) {
      printf("%d = %d^2", in, (int)sqrt(in));
      if ((int)pow((int)sqrt(in % 1000), 2) == in % 1000) {
         printf("%d = %d^2", in % 1000, (int)sqrt(in % 1000));
      } else if ((int)pow((int)sqrt(((in / 1000) * 100) + in % 100), 2) == (((in / 1000) * 100) + in % 100)) {
         printf("%d = %d^2", ((in / 1000) * 100) + in % 100, (int)sqrt(((in / 1000) * 100) + in % 100));
      } else if ((int)pow((int)sqrt(((in / 100) * 10) + in % 100), 2) == ((in / 100) * 10) + in % 10) {
         printf("%d = %d^2", ((in / 100) * 10) + in % 10, (int)sqrt(((in / 100) * 10) + in % 10));
      } else if ((int)pow((int)sqrt((in / 10)), 2) == in / 10) {
         printf("%d = %d^2", in / 10, (int)sqrt(in / 10));
      } else {
         printf("No 'quadratoso num exists'");
      }
   } else {
      printf("This is no 'quadrato' num");
   }
}
