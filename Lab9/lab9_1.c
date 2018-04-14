/*
 * Scrivere un programma che:
    Genera un vettore random di 30 valori interi tra 15 e 85.
    Lo stampa sullo schermo (ben formattato, es. 10 numeri per riga).
    Calcola la media (restituisce il valore corrispondente)
    Calcola il valore minimo (restituisce l'indice)
    Controlla se ci sono due elementi consecutivi uguali (restituisce l'indice del primo dei due oppure -1 se non ci sono)
    Controlla se tutti gli elementi sono distinti (restituisce 1 oppure 0)
    Calcola il valore max e il secondo max modificando i due parametri passati per riferimento.
 * Ognuno dei punti precedenti deve essere svolto con una funzione.
**/
#include <stdio.h>
#include <stdlib.h>
#define SIZE = 30

int rndGen() {
   return rand() % 60 + 16;
}

int min(int* pa) {
   int index = -1;
   for (int i = 0; i < SIZE; i++) {
      if (min > *(pa+i)) {
         min = *(pa+i);
         index = i;
      }
   }
   return index;
}

int average(int* pa) {
   int sum = 0;
   for (int i = 0; i < SIZE; i++) {
      sum += *(pa+i);
   }
   return sum/SIZE;
}

void seqNum(int* pa) {
   int index = -1;
   for (int i = 1; i < SIZE; i++) {
      if (*(pa+i-1) == *(pa+i)) {
         printf("Sequence in index: %d\n", i-1);
         index = i-1;
      }

      if (index != (i-1)) {
         printf("No index found\n");
      }
   }
}

int difNum(int* pa) {
   for (int i = 0; i < SIZE-1; i++) {
      for (int j = i+1; j < SIZE; j++) {
         if (*(pa+i) == *(pa+j)) {
            return 0;
         }
      }
   }
   return 1;
}

int max(int* pa, int* pmax) {
   
}

int main(void) {
   int a[SIZE];
   int* pa0 = &a;
   int max;
   int* pmax = &max;

   for (int i = 0; i < SIZE; i++) {
      a[i] = rndGen();

      printf("%2d ", a[i]);

      if ((i - 9) % 10 == 0) {
         printf("\n");
      }
   }

   printf("Average: %d\n", average(a));
   printf("Min: %d\n", min(a));
   seqNum(a);
   if (difNum(a) == 1) {
      printf("All nums are different\n");
   } else {
      printf("There are same nums in the array\n");
   }

   for (int i = 0; i < 2; i++) {
      if (max == 0) {
         printf("First max is: ")
      }
   }
}
