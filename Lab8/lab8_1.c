/*
 * Scrivere un programma che simula il gioco IndovinaNumero discusso a lezione in cui
 * si deve indovinare un numero da 1 a 100 a seguito di risposte "troppo alto" o "troppo basso".
 * Il programma, oltre ad eventuali funzioni ausiliarie, dovrà contenere 2 funzioni
 *  ComputerVsUtente e UtenteVsComputer che restituiscono il numero di tentativi necessari per indovinare il numero.
 * Il programma principale si compone poi delle due chiamate di funzione e della "proclamazione" del vincitore.
**/

#include <stdio.h>
#include <stdbool.h>

int cpu() {
   int value = rand() % 99 + 1;
   int in, i;

   for (i = 0; i < 7; i++) {
      printf("Indovina il numero: ");
      scanf("%d", &in);

      if (in > value) {
         printf("Troppo alto...\n");
      } else if (in < value) {
         printf("Troppo basso ...\n");
      } else {
         printf("Trovato..");
         break;
      }
   }

   return i;   //???????????????????????????????????????
}

int user() {
   
}

int main(void) {

}
