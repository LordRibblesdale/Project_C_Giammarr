/*
 * Scrivere un programma che prende in input un numero positivo N e scrive in output il valore di n!.
 * Il programma deve utilizzare una funzione ricorsiva int fatt(int) per calcolare tale numero.
**/

#include <stdio.h>

int fatt(int i) {
   if (i == 0) {
      return 1;
   } else {
      return i * fatt(i-1);
   }
}

int main(void) {
   unsigned int i;

   printf("Insert number: ");
   scanf("%d", &i);

   printf("Here: %d", fatt(i));

   return 0;
}
