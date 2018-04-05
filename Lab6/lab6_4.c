/*
   Riscrivere l'esercizio 2 del LAB.5 definendo ed utilizzando due funzioni:
      int DataValida(int, int, int) che prende in input tre valori interi corrispondenti a giorno,
         mese e anno e restituisce 1 se si tratta di una data valida oppure 0 se la data è errata
      void ScriviData (int, int, int) che prende in input tre valori interi corrispondenti a giorno,
         mese e anno e poi scrive sullo schermo la data con il mese scritto "a parole".
*/

#include <stdio.h>

int dataValida(int day, int month, int year) {
   if (year >= 1582 || year <= 2100) {
      switch (month) {
         case 1:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
         case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
               if (day <= 29) {
                  return 1;
               } else {
                  return 0;
               }
            } else {
               if (day <= 28) {
                  return 1;
               } else {
                  return 0;
               }
            }
         case 3:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
         case 4:
            if (day <= 30) {
               return 1;
            } else {
               return 0;
            }
         case 5:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
         case 6:
            if (day <= 30) {
               return 1;
            } else {
               return 0;
            }
         case 7:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
         case 8:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
            break;
         case 9:
            if (day <= 30) {
               return 1;
            } else {
               return 0;
            }
         case 10:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
         case 11:
            if (day <= 30) {
               return 1;
            } else {
               return 0;
            }
         case 12:
            if (day <= 31) {
               return 1;
            } else {
               return 0;
            }
      }
   } else {
      return 0;
   }
}

void scriviData(int day, int month, int year) {
   switch (month) {
      case 1:
         printf("%d Gennaio %d", day, year);
         break;
      case 2:
         printf("%d Febbraio %d", day, year);
         break;
      case 3:
         printf("%d Marzo %d", day, year);







         break;
      case 4:
         printf("%d Aprile %d", day, year);
         break;
      case 5:
         printf("%d Maggio %d", day, year);
         break;
      case 6:
         printf("%d Giugno %d", day, year);
         break;
      case 7:
         printf("%d Luglio %d", day, year);
         break;
      case 8:
         printf("%d Agosto %d", day, year);
         break;
      case 9:
         printf("%d Settembre %d", day, year);
         break;
      case 10:
         printf("%d Ottobre %d", day, year);
         break;
      case 11:
         printf("%d Novembre %d", day, year);
         break;
      case 12:
         printf("%d Dicembre %d", day, year);
         break;
   }
}

int main(void) {
   unsigned int day, month, year;

   printf("Insert day: ");
   scanf("%d", &day);

   printf("Insert month: ");
   scanf("%d", &month);

   printf("Insert year: ");
   scanf("%d", &year);

   if (dataValida(day, month, year) != 0) {
      scriviData(day, month, year);
   } else {
      printf("Errore");
   }
}
