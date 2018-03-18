/*
   Scrivere un programma che legge un valore di tipo double,
    uno di tipo char e poi ancora uno di tipo double e infine fa in modo che:
      se il carattere letto è '+' allora stampa la somma dei due valori numerici;
      se il carattere è '*' allora stampa il prodotto dei due valori numerici;
      se è un altro carattere allora stampa un messaggio di errore.
   (Utilizzare l'istruzione if..else)
*/

#include <stdio.h>

int main(void) {
   double input1, input2;
   char c;

   printf("Insert char: [+, *] ");
   scanf("%c", &c);
   if (c == '+') {
      printf("Insert two numbers:\n-> ");
      scanf("%lf", &input1);
      printf("-> ");
      scanf("%lf", &input2);
      printf("Sum = %lf", (input1 + input2));
   } else if (c == '*') {
      printf("Insert two numbers:\n-> ");
      scanf("%lf", &input1);
      printf("-> ");
      scanf("%lf", &input2);
      printf("Sum = %lf", (input1 * input2));
   } else {
      printf("Error: operator not found.\n");
   }

   return 0;
}
