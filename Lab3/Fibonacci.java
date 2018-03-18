/* Fibonacci's algorithm
 * Fibonacci's sequence is fast-growing number, found adding:
 *    [i-1] + [i-2] for i -> n (i belongs to natural numbers, i >= 0)
 *                  for (long i = 0, i <= n, i++)
 *
 * Author: LordRibblesdale
 * Method: recursive function
 */

import java.util.Scanner;

public class Fibonacci {
   public static long fibSec(long n) {
      long tmp = 1, sum = 1, fib = 0;
      while (n > 2) {
         fib = (sum + tmp);
         tmp = sum;
         sum = fib;
         n--;
      }
      return sum;
   }

   public static void main(String[] args) {
      long n = 0;
      Scanner in = new Scanner(System.in);

      System.out.print("Insert number here: ");
      do {
         if (n < 0) {
            System.out.print("Exception: n is not positive.\nInsert again: ");
         }
         n = in.nextLong();
      } while (n < 0);

      System.out.print("Fibonacci's sequence is: " + fibSec(n));
   }
}
