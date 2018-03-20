/*
   Scrivere un programma che richiede all'utente un numero intero x e poi scrive sullo schermo una linea composta da x asterischi.
*/

#include <stdio.h>

int main() {
   int input;
   printf("Insert a number: ");
   scanf("%d", &input);

   while (input > 0) {
      printf("*");
      input--;
   }

   return 0;
}
