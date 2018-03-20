/*
   Scrivere un programma che legge da tastiera un numero intero x (positivo)
    e stampa sullo schermo un quadrato (pieno) di lato x costituito da simboli "*"
    nelle posizioni sopra la diagonale e simboli "o" sotto la diagonale.
   (UTILIZZARE ISTRUZIONE FOR E NON UTILIZZARE ISTRUZIONI IF)
*/

#include <stdio.h>

int main(void) {
   unsigned int x;

   printf("\nInsert number: ");
   scanf("%d", &x);

   for (int i = 0; i < x; i++) {
       for (int j = 0; j < i; j++) {
          printf("o ");
       }
       printf("x ");
       for (int k = 0; k < (x-i-1); k++) {
          printf("* ");
       }
       printf("\n");
   }

   return 0;
}
