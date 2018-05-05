#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define SIZE 30

void initialise(int[SIZE][SIZE]);
void print(int[SIZE][SIZE]);
void localMax(int[SIZE][SIZE]);

int main(void) {
   srand(time(NULL));

   int m[SIZE][SIZE];
   initialise(m);
   print(m);
   localMax(m);

   return 0;
}

void initialise(int a[SIZE][SIZE]) {
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         a[i][j] = (rand() % 61) - 30;
      }
   }
}

void print(int a[SIZE][SIZE]) {
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         printf("%4d", a[i][j]);
      }
      printf("\n");
   }
}

void localMax(int a[SIZE][SIZE]) {
   bool isMax;
   for (int i = 0; i < SIZE; i++) {
      isMax = true;
      for (int j = 0; j < SIZE; j++) {
         if ((i-1) > -1 && isMax) {
            if (a[i][j] > a[i-1][j]) {
               isMax = (isMax && true);
            } else {
               isMax = (isMax && false);
            }
         }

         if ((i+1) < SIZE && isMax) {
            if (a[i][j] > a[i+1][j]) {
               isMax = (isMax && true);
            } else {
               isMax = (isMax && false);
            }
         }

         if ((j-1) > -1 && isMax) {
            if (a[i][j] > a[i][j-1]) {
               isMax = (isMax && true);
            } else {
               isMax = (isMax && false);
            }
         }

         if ((j+1) < SIZE && isMax) {
            if (a[i][j] > a[i][j+1]) {
               isMax = (isMax && true);
            } else {
               isMax = (isMax && false);
            }
         }

         if (isMax) {
            printf("%d is localMax @ %d %d\n", a[i][j], i, j);
         }

         printf("%d %d / ", i, j);
      }
   }
}
