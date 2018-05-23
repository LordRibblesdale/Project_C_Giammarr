#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stackNode {
   char l;
   struct stackNode *nextNode;
} StackNode;

typedef stackNode *PStackNode;

void push(PStackNode *ps, char c) {
   PStackNode newPs = malloc(sizeof(PStackNode));

   if (newPS != NULL) {
      newPs->l = c;
      newPs->nextNode = NULL;
      *ps = newPs;
   } else {
      printf("Rip memory\n");
   }
}

char pop(PStackNode *ps) {
   PStackNode tmp = *ps;
   char l = (*ps)->l;
   *ps = (*ps)->nextNode;
   free(tmp);
   return l;
}

bool isPalindrome(char *c) {
   int index = (sizeof c / sizeof(char))+2;
   char *c1 = malloc(index);
   char *c2 = malloc(index);
   bool isEqual = true;

   for (int i = index; i >= 0; i--) {
      *(c1 + index-i) = *(c+i);
   }
   *(c1+index+1) = '\0';
   printf("%s", c1);

   for (int i = index+1; i < sizeof c/sizeof(char); i++) {
      *(c2 + (i-index-1)) = *(c+i);
   }

   *(c2+ sizeof c/sizeof(char)) = '\0'; //already on last char?

   //printf("%s\n%s", c1, c2);

   for (int i = 0; i < sizeof c1 / sizeof(char); i++) {
      if (*(c1+i) != *(c2+i)) {
         isEqual = false;
         break;
      }
   }

   return isEqual;
}

PStackNode parseString(char *c) {
   /*
   char *sup = malloc(sizeof c);
   int i = 0, j = 0;
   while (*(c+i) != '\0') {
      if (*(c+i) != ' ') {
         *(sup+j) = *(c+i);
         j++;
      }
      i++;
   }
   *(sup+j) = '\0';

   return isPalindrome(sup);
   //printf("%s", c);
   //free(sup);
   */
}

int main() {
   char *c = malloc(30*sizeof(char));

   printf("Insert string: ");
   gets(c);
   parseString(c);

   //if (isPalindrome(c)) {
   /*
   if (parseString(c)) {
      printf("\nEquals\n");
   } else {
      printf("\nNot equals");
   }
   */
}
