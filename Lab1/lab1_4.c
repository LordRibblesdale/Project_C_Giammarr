/*
Scrivere un programma che chiede all'utente di inserire da tastiera un numero intero di 5 cifre e
lo riscrive "in verticale" cioe' mettendo un accapo dopo ogni cifra.
(Sugg. usare l'operatore % che calcola il resto della divisione intera.)
*/

#include <stdio.h>

int main() {
   int num;
   printf("Insert num [xxxxx]: ");
   scanf("%d", &num);
   printf("\n%d", num/10000);
   printf("\n%d", (num%10000)/1000);
   printf("\n%d", (num%1000)/100);
   printf("\n%d", (num%100)/10);
   printf("\n%d\n", num%10);
}
