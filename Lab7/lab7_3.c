/*
 * Scrivere un programma che prende in input un numero positivo N
 * e scrive in output l' N-esimo numero di Fibonacci.
 * Il programma deve utilizzare una funzione ricorsiva int Fibon(int) per calcolare tale numero.
**/

#include <stdio.h>

int fibon(int i) {
   if (i == 0) {
      return 0;
   } else if (i == 1 || i == 2) {
      return 1;
   } else {
      return fibon(i-1) + fibon(i-2);
   }
}

int main(void) {
   unsigned int i;

   printf("Insert number: ");
   scanf("%d", &i);

   printf("Here: %d", fibon(i));

   return 0;
}
