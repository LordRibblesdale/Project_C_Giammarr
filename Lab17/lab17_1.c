#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stackNode {
   char l;
   struct stackNode *nextNode;
} StackNode;

struct stackNode {
   char l;
   struct stackNode *nextNode;
};

typedef stackNode StackNode;

typedef StackNode *PStackNode;

void push(PStackNode *ps, char c) {
   PStackNode newPs = malloc(sizeof(PStackNode));

   if (newPs != NULL) {
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

bool isEmpty(PStackNode )

bool isPalindrome(PStackNode *sup) {
   bool isEqual = false;
   char *c1 = malloc(30*sizeof(char));

   while

   return isEqual;
}

bool parseString(char *c) {
   PStackNode *sup = malloc(sizeof(PStackNode));
   int i = 0, j = 0;
   while (*(c+i) != '\0') {
      if (*(c+i) != ' ') {
         push(sup, *(c+i));
      }
      i++;
   }

   return isPalindrome(sup);
   //printf("%s", c);
   //free(sup);
}

int main() {
   char *c = malloc(30*sizeof(char));

   printf("Insert string: ");
   gets(c);

   //if (isPalindrome(c)) {

   if (parseString(c)) {
      printf("\nEquals\n");
   } else {
      printf("\nNot equals");
   }

}
