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
   for (int i = 0; i < SIZE; i++) {
      for (int j = i+1; j < SIZE; j++) {
         if (a[i][j] == 1) {
            for (int k = j+1; k < SIZE; k++) {
               if (a[i][k] == 1 && a[j][k] == 1 && a[k][j] == 1   ) {
                  printf("%d %d %d\n", i, j, k);
                  break;
               }
            }
         }
      }
   }
}

//Need to add 4th exercise request

int main(void) {
   srand(time(NULL));

   int m[SIZE][SIZE];
   initialise(m);
   print(m);
   friends(m);

   return 0;
}
