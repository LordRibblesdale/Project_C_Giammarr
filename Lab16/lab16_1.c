#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

void initialise(int a[SIZE][SIZE]) {
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         a[i][j] = (rand() % 20) + 1;
         printf("%3d", a[i][j]);
      }
      printf("\n");
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

void ask(int *x, int *y) {
   do {
      printf("Insert X: ");
      scanf("%d", x);
   } while (*x < 0 || *x > SIZE-1);

   do {
      printf("Insert Y: ");
      scanf("%d", y);
   } while (*y < 0 || *y > SIZE-1);
}

int posMax(int a[SIZE][SIZE], int xc, int yc, int *xm, int *ym) {
   int tmpX = -1, tmpY = -1;
   int max = 0;
<<<<<<< HEAD
   int isMoved;

   for (int i = 0; i < 20; i++) {
      isMoved = 0;
      if ((xc-1 >= 0) && (xc+1 < SIZE) && (yc-1 >= 0) && (yc+1 < SIZE)) {
         if (a[xc-1][yc] > max) {
            tmpX = xc - 1;
            tmpY = yc;
            max = a[tmpX][yc];
            printf("tmpX%d\n", i);
            isMoved = 1;
         }
         if (a[xc+1][yc] > max) {
            tmpX = xc + 1;
            tmpY = yc;
            max = a[tmpX][yc];
            printf("tmpX%d\n", i);
            isMoved = 1;
         }
         if (a[xc][yc-1] > max) {
            tmpY = yc - 1;
            tmpX = xc;
            max = a[xc][tmpY];
            printf("tmpY%d\n", i);
            isMoved = 1;
         }
         if (a[xc][yc] > max) {
            tmpY = yc + 1;
            tmpX = xc;
            max = a[yc][tmpY];
            printf("tmpY%d\n", i);
            isMoved = 1;
=======

   for (int i = 0; i < 20; i++) {
      if ((xc-1 >= 0) && (xc+1 < SIZE) && (yc-1 >= 0) && (yc+1 < SIZE)) {
         if (a[xc-1][yc] >= a[xc][yc] && a[xc-1][yc] > max) {
            tmpX = xc - 1;
            max = a[tmpX][yc];
            printf("tmpX%d\n", i);
         }
         if (a[xc+1][yc] >= a[xc][yc] && a[xc+1][yc] > max) {
            tmpX = xc + 1;
            max = a[tmpX][yc];
            printf("tmpX%d\n", i);
         }
         if (a[xc][yc-1] >= a[xc][yc] && a[xc][yc-1] > max) {
            tmpY = yc - 1;
            max = a[xc][tmpY];
            printf("tmpY%d\n", i);
         }
         if (a[xc][yc+1] >= a[xc][yc] && a[xc][yc] > max) {
            tmpY = yc + 1;
            max = a[yc][tmpY];
            printf("tmpY%d\n", i);
>>>>>>> 341ed93604c7fe8516579665b73e26c804df1896
         }

         max = a[xc][yc];

<<<<<<< HEAD
         if (isMoved == 1) {
=======
         if (tmpX != -1 && tmpY != -1) {
>>>>>>> 341ed93604c7fe8516579665b73e26c804df1896
            *xm = tmpX;
            *ym = tmpY;

            xc = *xm;
            yc = *ym;
            printf("%d, %d\n", xc, yc);
         } else {
            break;
         }
      }

<<<<<<< HEAD
=======
      a[xc][yc] = 0;
>>>>>>> 341ed93604c7fe8516579665b73e26c804df1896
      print(a);
      printf("\n\n");
   }

   return max;
}

int main() {
   srand(time(NULL));

   int a[SIZE][SIZE];
   int i = 0;
   int x = -1, y = -1;
   int *px = &x, *py = &y;
   int xf = -1, yf = -1;
   int *pxf = &xf, *pyf = &yf;
   initialise(a);

   do {
      xf = -1;
      yf = -1;
      ask(&x, &y);
<<<<<<< HEAD
=======
      printf("Start = %d, %d\n", x, y);
>>>>>>> 341ed93604c7fe8516579665b73e26c804df1896
      printf("Valore max => %d", posMax(a, x, y, pxf, pyf));
      printf("\n %d %d", xf, yf);
      printf("\nWant to try again? ");
      scanf("%d", &i);
   } while (i != 0);

   return 0;
}
