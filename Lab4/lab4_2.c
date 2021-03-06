/*
   Scrivere un programma (UTILIZZARE ISTRUZIONE FOR E NON UTILIZZARE ISTRUZIONI IF)
      che chiede all’utente di inserire un carattere c e un intero x , 3 ≤ x ≤ 30 ,
      e disegna un rombo di lato x come nel seguente esempio: (esempio per x=4 e c=o)

      o
     ooo
    ooooo
   ooooooo
    ooooo
     ooo
      o
*/

#include <stdio.h>

int main() {
   char c;
   unsigned int x;

   do {
      printf("Insert number: [3-30]: ");
      scanf("%d", &x);
   } while (x < 3 || x > 30);

   while (x % 2 != 0) {
      for (int i = 0; i < (x-1); i++) {
         for (int j = i+1; j < (x-1); j++) {
            printf(" ");
         }
         for (int j = 0; j < (i+1); j++) {
            printf("*");
         }
         for (int j = 0; j < i; j++) {
            printf("*");
         }
         printf("\n");
      }
      for (int i = 0; i < (x-1); i++) {
         for (int j = 0; j < (i+1); j++) {
            printf(" ");
         }
         for (int j = 0; j < (x-i-2); j++) {
            printf("*");
         }
         for (int j = ((x-i)-3); j > 0; j--) {
            printf("*");
         }
         printf("\n");
      }
      break;
   }

   while (x % 2 == 0) {
      for (int i = 0; i < (x); i++) {
         for (int j = i+1; j < x; j++) {
            printf(" ");
         }
         for (int j = 0; j < (i+2); j++) {
            printf("*");
         }
         for (int j = 0; j < i; j++) {
            printf("*");
         }
         printf("\n");
      }
      for (int i = 0; i < (x-1); i++) {
         for (int j = 0; j < i+1; j++) {
            printf(" ");
         }
         for (int j = 0; j < (x-i); j++) {
            printf("*");
         }
         for (int j = ((x-i)-2); j > 0; j--) {
            printf("*");
         }
         printf("\n");
      }
      break;
   }
}
