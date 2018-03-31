/*
   VARIANTE DAL LAB 3. da realizzare utilizzando una istruzione  switch .
   Scrivere un programma che legge due valori di tipo float, e poi richiede un operazione come un valore di tipo char.
   Infine: se il carattere letto e' '+' allora stampa la somma dei due valori numerici;
   se il carattere letto e' '-' allora stampa la differenza dei due valori numerici;
   se il carattere e' '*' allora stampa il prodotto dei due valori numerici;
   se il carattere letto e' '/' allora stampa il risultato della divisione dei due valori numerici
      (escludere il caso in cui il secondo valore è zero!);
   se e' un altro carattere allora stampa un messaggio di errore.
*/

#include <stdio.h>

int main(void) {
   float in1, in2;
   char c;

   printf("Insert float1 ");
   scanf("%f", &in1);

   printf("Insert float2 ");
   do {
      scanf("%f", &in2);
   } while (in2 == 0);

   getchar();
   printf("Insert char [+, -, *, /] ");
   scanf("%c", &c);

   switch (c) {
      case '+':
         printf("Sum = %f", (in1 + in2));
         break;
      case '-':
         printf("Difference = %f", (in1 - in2));
         break;
      case '*':
         printf("Multiplication = %f", (in1 * in2));
         break;
      case '/':
         printf("Division = %f", (in1 / in2));
         break;
      default:
         printf("Error char.");
   }

   return 0;
}
