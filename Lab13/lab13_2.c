#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define SIZE 10

void initialise(int a[SIZE][SIZE]) {
   for (int i = 0; i < SIZE; i++) {
      for (int j = i; j < SIZE; j++) {
         a[i][j] = (rand() % 2);
         a[j][i] = a[i][j];
      }
   }
}

void print(int a[SIZE][SIZE]) {
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         printf("%3d", a[i][j]);
      }
      printf("\n");
   }
}

void friends(int a[SIZE][SIZE]) {
   bool b;
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         b = (j+1 < SIZE) || (j+2 < SIZE) ;
         if (b) {
            b = ((a[i][j] == a[i][j+1]) && (a[i][j+1] == a[i][j+2])) && (a[i][j] != 0) ;
            if (b) {
               printf("%d %d; ", i, j);
            }
         }
      }
   }
}

int main(void) {
   srand(time(NULL));

   int m[SIZE][SIZE];
   initialise(m);
   print(m);
   friends(m);

   return 0;
}
