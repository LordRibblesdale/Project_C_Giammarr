#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

void initialise(int a[SIZE][SIZE]);
void printA(int a[SIZE][SIZE]);
int sommaCornice(int a[SIZE][SIZE], int h);

int main() {
   srand(time(NULL));
   int a[SIZE][SIZE];
   int x, h;

   initialise(a);
   printA(a);

   do {
      printf("Insert num [1-13]: ");
      scanf("%d", &h);
   } while (h <= 0 || h > 14);

   if (h <= SIZE/2) {
      x = sommaCornice(a, h);
   } else {
      x = sommaCornice(a, SIZE-h-1);
   }

   printf("-> %d\n", x);

   return 0;
}

void initialise(int a[SIZE][SIZE]) {
   int i, j;

   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE-1; j++) {
         if (j == 0) {
            a[i][j] = rand() % 51 -20;
            a[i][SIZE-1] = a[i][j];
         } else {
            do {
               a[i][j] = rand() % 51 -20;
            } while (a[i][j] == a[i][0]);
         }
      }
   }
}

void printA(int a[SIZE][SIZE]) {
   int i, j;

   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         printf("%4d", a[i][j]);
      }
      printf("\n");
   }
}

int sommaCornice(int a[SIZE][SIZE], int h) {
   int borderSum = 0;
   int innerSum = 0;
   int i, j;

   for (i = 0; i < SIZE; i++) {
      borderSum += a[0][i];
      borderSum += a[SIZE-1][i];
      borderSum += a[i][0];
      borderSum += a[i][SIZE-1];
   }

   borderSum -= (a[0][0] + a[SIZE-1][SIZE-1] + a[0][SIZE-1] + a[SIZE-1][0]);

   for (i = h; i < SIZE-h; i++) {
      innerSum += a[h][i];
      innerSum += a[SIZE-h-1][i];
      innerSum += a[i][h];
      innerSum += a[i][SIZE-h-1];
   }

   if (h != (SIZE/2)) {
      innerSum -= (a[h][h] + a[SIZE-h-1][SIZE-h-1] + a[h][SIZE-h-1] + a[SIZE-h-1][h]);
   } else {
      innerSum = a[(SIZE/2)][(SIZE/2)];
   }

   printf("%d, %d\n\n", borderSum, innerSum);

   if (innerSum >= borderSum) {
      return innerSum;
   }

   return 0;
}
