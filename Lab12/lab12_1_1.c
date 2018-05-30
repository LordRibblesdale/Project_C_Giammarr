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
   FILE *f = fopen("matrix.txt", "r");

   int i = 0, j = 0;

   while (fscanf(f, "%d\n", &a[i][j]) != EOF) {
      if (++j == SIZE) {
         j = 0;
         if (i != SIZE) {
            i++;
         }
      }
   }

   fclose(f);
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
      for (int j = 0; j < SIZE; j++) {

         if ((i-1) != -1 || (i+1) != SIZE || (j-1) != -1 || (j+1) != SIZE) {
            if (a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1]) {
               isMax = true;
            } else {
               isMax = false;
            }
         }
         if (isMax) {
            printf("%d is localMax @ %d %d\n", a[i][j], i, j);
         }
      }
   }
}
