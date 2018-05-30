#include <stdio.h>
#define SIZE 41

void inputString(char c[]);
int parseString(char c[], char delete[], char final[]);
int lengthString(char c[]);

int main() {
   char zeroes[SIZE], delete[SIZE], final[SIZE];

   printf("Here the string [max 40 chars]: ");
   inputString(zeroes);
   printf("Here the string to delete [max 40 chars]: ");
   inputString(delete);

   if (lengthString(zeroes) >= lengthString(delete)) {
      if (parseString(zeroes, delete, final) == 0) {
         printf("\nNot parsed\n");
      } else {
         printf("\n%s\n", final);
      }
   } else {
      if (parseString(delete, zeroes, final) == 0) {
         printf("\nNot parsed\n");
      } else {
         printf("\n%s\n", final);
      }
   }
}

int parseString(char c[], char delete[], char final[]) {
   int cMaxIndex = lengthString(c);
   int deleteMaxIndex = lengthString(delete);
   int maxSpace = cMaxIndex - deleteMaxIndex;
   int i, check, j;
   int result = 0;

   for (j = 0; j < deleteMaxIndex; j++) {
      check = 0;
      for (i = 0; i < maxSpace+1; i++) {
         printf("%c %c\n", c[j+i], delete[i]);
         if (c[j+i] == delete[i]) {
            check++;
         } else {
            break;
         }
      }
   }


   if (check != deleteMaxIndex) {
      result = 0;
   } else {
      int k, j;

      for (k = 0; k < i; k++) {
         final[k] = c[k];
      }

      for (j = k; j < cMaxIndex+1; j++) {
         final[j] = c[deleteMaxIndex+k];
      }

      result = 1;
   }

   return result;
}

void inputString(char c[]) {
   int i;

   for (i = 0; i < SIZE-1 && (c[i] = getchar()) != '\n'; i++);

   c[i] = '\0';

   printf("%s\n", c);
}

int lengthString(char c[]) {
   int i = 0;

   while (c[i++] != '\0');

   return i-1;
}
