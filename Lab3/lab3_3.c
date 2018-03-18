/*
   Numeri di Fibonacci. I numeri di Fibonacci, f1, f2, ... fn sono definiti ricorsivamente come segue:
   f1=1
   f2=1
   ...
   fn = fn-1 +fn-2
   Scrivere un programma che prende in input un numero positivo N e
    scrive in output l'N-esimo numero di Fibonacci. (ATTENZIONE! Testare solo per numeri piccoli)
*/

#include <stdio.h>

int main(void) {
   unsigned long long input, tmp = 1, sum = 1, fib = 0;

   printf("Insert a number: ");
   scanf("%lld", &input);

   if (input == 1 || input == 2) {
      printf("Fibonacci's sequence is: 1\n");
   } else {
      while (input > 2) {
         fib = (sum + tmp);
         tmp = sum;
         sum = fib;
         input--;
      }
      printf("Fibonacci's sequence is: %lld\n", sum);
   }

   return 0;
}
