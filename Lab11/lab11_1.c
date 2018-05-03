/*
Varie su Matrici
Scrivere un programma in C che:
   Genera una matrice di dimensione 20x30 di numeri casuali compresi tra -10 e 10 (estremi inclusi)
   Stampa la matrice sullo schermo
   Verifica se esiste una riga della matrice la cui somma sia 0. In caso affermativo stampa la riga sullo schermo.
   Verifica se esiste una colonna della matrice la cui somma sia 0. In caso affermativo stampa la colonna sullo schermo.
   Identifica la riga della matrice la cui somma degli elementi è maggiore. Stampa sullo schermo l'indice di tale riga.
   Verifica se esiste una riga la cui somma degli elementi è uguale alla somma degli elementi di una colonna.
      In caso affermativo stampa tali indici di riga e colonna, in caso negativo segnala che la condizione non è verificata. Sugg.: utilizzare un vettore di supporto.
   Stampa l'indice di tutte le righe in cui la media aritmetica dei valori è maggiore della media aritmetica dei valori dell'intera matrice.
I vari punti devono essere svolti come funzioni.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROW 20
#define COL 30

void initialise(int a[ROW][COL]);
void print(int a[ROW][COL]);
void isRowNull(int a[]);
void isColumnNull(int a[ROW][COL]);
void maxIntRowSum(int a[ROW][COL]);
void isRowEqualColumn(int a[]);
void isRowAverageMax(int a[ROW][COL]);

int main(void) {
   srand(time(NULL));

   int m[20][30];
   initialise(m);

   print(m);

   for (int i = 0; i < ROW; i++) {
      isRowNull(m[i]);
   }

   isColumnNull(m);
   maxIntRowSum(m);
}

void initialise(int a[ROW][COL]) {
   for (int i = 0; i < ROW; i++) {
      for (int j = 0; j < COL; j++) {
         a[i][j] = (rand() % 19) - 9;
      }
   }
}

void print(int a[ROW][COL]) {
   for (int i = 0; i < ROW; i++) {
      for (int j = 0; j < COL; j++) {
         printf("%2d ", a[i][j]);
      }
      printf("\n");
   }
}

void isRowNull(int a[]) {
   int sum = 0;

   for (int i = 0; i < COL; i++) {
      sum += a[i];
   }

   if (sum == 0) {
      printf("\nVoid Row\n");

      for (int i = 0; i < COL; i++) {
         printf("%2d ", a[i]);
      }
      printf("\n");
   }
}

void isColumnNull(int a[ROW][COL]) {
   int sum;

   for (int i = 0; i < COL; i++) {
      sum = 0;
      for (int j = 0; j < ROW; j++) {
         sum += a[j][i];
      }

      if (sum == 0) {
         printf("\nVoid Column\n");
         for (int j = 0; j < ROW; j++) {
            printf("%2d ", a[j][i]);
         }
      }
   }
}

void maxIntRowSum(int a[ROW][COL]) {
   int sum, sumMax = 0;
   int index;

   for (int i = 0; i < ROW; i++) {
      sum = 0;
      for (int j = 0; j < COL; j++) {
         sum += a[i][j];
      }

      if (sum > sumMax) {
         sumMax = sum;
         index = i;
      }
   }

   printf("\nMaxValue Row\n");
   for (int i = 0; i < COL; i++) {
      printf("%2d ", a[index][i]);
   }
}

//To be finished:
//void isRowEqualColumn(int a[]);
//void isRowAverageMax(int a[ROW][COL]);
