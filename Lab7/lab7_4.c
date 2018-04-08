/*
 * Scrivere un programma che simula una partita a dadi fra il computer e l'utente.
 * Scrivere una funzione int lancia2Dadi() Che simula il lancio di 2 dadi e restituisce il risultato (la somma dei 2 dadi).
 * Il main consiste in una partita di 7 turni. Ad ogni turno, si simula un tiro (richiamando la funzione lancia2Dadi) dell'utente
 * e un tiro del computer e si visualizzano i risultati. Alla fine viene "proclamato" il vincitore che è ovviamente colui che ha vinto più turni.
**/

#include <stdio.h>
#include <stdlib.h>

int lancia2Dadi() {
   int d1 = rand() % 6 + 1, d2 = rand() % 6 + 1;
   return d1 + d2;
}

int main(void) {
   int user, cpu, u = 0, c = 0;
   for (int i = 0; i < 7; i++) {
      user = lancia2Dadi();
      printf("Utente: %d\n", user);
      cpu = lancia2Dadi();
      printf("CPU: %d\n", cpu);

      if (user > cpu) {
         printf("User WIN\n\n");
         u++;
      } else if (user < cpu) {
         printf("Cpu WIN\n\n");
         c++;
      } else {
         printf("Draw\n\n");
      }
   }

   if (u > c) {
      printf("User WINS the match\n\n");
   } else if (u < c) {
      printf("Cpu WINS the match\n\n");
   } else {
      printf("Draw\n\n");
   }
}
