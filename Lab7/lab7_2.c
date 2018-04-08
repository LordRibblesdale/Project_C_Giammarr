/*
 * Scrivere un programma che prende in input un numero positivo B e un numero positivo N
 * e scrive in output il valore della potenza N-esima di B.
 * Il programma deve utilizzare una funzione ricorsiva int pot(int,int) per calcolare tale numero.
**/

#include <stdio.h>

int pot(int b, int e) {
   if (e == 0) {
      return 1;
   } else {
      return b * pot(b, --e);
   }
}

int main(void) {
   unsigned int i, n;

   printf("Insert base: ");
   scanf("%d", &i);

   printf("Insert exponent: ");
   scanf("%d", &n);

   printf("Here: %d", pot(i, n));

   return 0;
}
