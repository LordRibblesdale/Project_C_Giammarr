/*
   Scrivere un programma che legge da tastiera 5 numeri interi e scrive sullo schermo la loro somma.
*/

#include <stdio.h>

int main() {
   int n1, n2, n3, n4, n5, i = 1;
   printf("\nN%d: ", i);
   scanf("%d", &n1);
   i++;
   printf("\nN%d: ", i);
   scanf("%d", &n2);
   i++;
   printf("\nN%d: ", i);
   scanf("%d", &n3);
   i++;
   printf("\nN%d: ", i);
   scanf("%d", &n4);
   i++;
   printf("\nN%d: ", i);
   scanf("%d", &n5);

   printf("\nSum: %d\n", (n1 + n2 + n3 + n4 + n5));
   return 0;
}
