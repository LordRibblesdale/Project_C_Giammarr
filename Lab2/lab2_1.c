/*
   Scrivere un programma che richiede all'utente un numero intero x e poi scrive sullo schermo una linea composta da x asterischi.
*/

#include <stdio.h>

int main() {
   int input, i = 0;
   printf("Insert a number: ");
   scanf("%d", &input);

   while (i < input) {
      printf("*");
      i++;
   }

   return 0;
}
