/*
   Scrivere un programma che legge da tastiera 5 numeri interi e scrive sullo schermo la loro somma e
      la loro media. Il programma dovra' utilizzare solo 2 variabili .
*/

#include <stdio.h>

int main() {
   int n, sum = 0, i = 1;
   printf("\nN%d: ", i);
   scanf("%d", &n);
   sum += n;
   i++;
   printf("\nN%d: ", i);
   scanf("%d", &n);
   i++;
   sum += n;
   printf("\nN%d: ", i);
   scanf("%d", &n);
   i++;
   sum += n;
   printf("\nN%d: ", i);
   scanf("%d", &n);
   i++;
   sum += n;
   printf("\nN%d: ", i);
   scanf("%d", &n);
   sum += n;

   printf("\nSum: %d\n", sum);
   printf("\nAverage: %d\n", (sum/5));
}
