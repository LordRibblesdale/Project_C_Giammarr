/*
   Scrivere un programma che chiede all’utente di inserire tre numeri interi  giorno, mese, anno
      corrispondenti ad una data e poi controlla se si tratta di una data valida.
      (Il giorno del mese deve essere "compatibile" con il mese secondo la nota filastrocca e non dimenticare gli anni bisestili!)
      Usare una istruzione  switch .
   Se la data è valida la riscrive, scrivendo il mese "a parole".
   Se la data non è valida, sullo schermo si scrive anche il perchè.
   Si ricorda che gli anni bisestili sono quelli divisibili per 4, con eccezione dei secoli che devono essere divisibili per 8
      (ad esempio il 1900 non è stato bisestile).
   Assumiamo valori di anno validi a partire dall'inizio del calendario gregoriano 1582 e fino al 2100.
   CURIOSITA': il calendario gregoriano fu promulgato da papa Gregorio XIII a villa Mondragone adesso proprierà
      dell'Università di Roma Tor Vergata.
*/

#include <stdio.h>

int main(void) {
   unsigned int day, month, year;

   printf("Insert day: ");
   scanf("%d", &day);

   printf("Insert month: ");
   scanf("%d", &month);

   printf("Insert year: ");
   scanf("%d", &year);

   if (year >= 1582 || year <= 2100) {
      switch (month) {
         case 1:
            if (day <= 31) {
               printf("%d Gennaio %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
               if (day <= 29) {
                  printf("%d Febbraio %d", day, year);
               } else {
                  printf("Giorno fuori range [1-29] per l'anno bisestile");
               }
            } else {
               if (day <= 28) {
                  printf("%d Febbraio %d", day, year);
               } else {
                  printf("Giorno fuori range [1-28]");
               }
            }
            break;
         case 3:
            if (day <= 31) {
               printf("%d Marzo %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         case 4:
            if (day <= 30) {
               printf("%d Aprile %d", day, year);
            } else {
               printf("Giorno fuori range [1-30]");
            }
            break;
         case 5:
            if (day <= 31) {
            printf("%d Maggio %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         case 6:
            if (day <= 30) {
               printf("%d Giugno %d", day, year);
            } else {
               printf("Giorno fuori range [1-30]");
            }
            break;
         case 7:
            if (day <= 31) {
               printf("%d Luglio %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         case 8:
            if (day <= 31) {
            printf("%d Agosto %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         case 9:
            if (day <= 30) {
               printf("%d Settembre %d", day, year);
            } else {
               printf("Giorno fuori range [1-30]");
            }
            break;
         case 10:
            if (day <= 31) {
               printf("%d Ottobre %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         case 11:
            if (day <= 30) {
               printf("%d Novembre %d", day, year);
            } else {
               printf("Giorno fuori range [1-30]");
            }
            break;
         case 12:
            if (day <= 31) {
               printf("%d Dicembre %d", day, year);
            } else {
               printf("Giorno fuori range [1-31]");
            }
            break;
         default:
            printf("Mese fuori range [1-12]");
      }
   } else {
      printf("Anno fuori range 1582-2100");
   }

   return 0;
}
