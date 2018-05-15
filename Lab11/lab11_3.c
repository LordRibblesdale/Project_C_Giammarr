#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main(void) {
   srand(time(NULL));
   int a[SIZE];
   int tmp, index = 0, index2 = SIZE-1;

   for (int i = 0; i < SIZE; i++) {
      a[i] = rand() % 3;
      printf("%d", a[i]);
   }

   printf("\n");

   for (int i = 0; i < SIZE; i++) {
      if (a[i] == 0) {
         tmp = a[i];
         a[i] = a[index];
         a[index] = tmp;
         index++;
      } else if (a[i] == 2) {
         tmp = a[i];
         a[i] = a[index2];
         a[index2] = tmp;
         index2--;
      }
   }


   for (int i = 0; i < SIZE; i++) {
      a[i] = rand() % 3;
      printf("%d", a[i]);
   }

   return 0;
}
