#include <stdio.h>
#define SIZE 20

void menu(void) {
   printf("\n\n Operazioni possibili:\n"
          "   1 per inserire un elemento nella coda (enQueue).\n"
          "   2 per estrarre un elemento dalla coda (deQueue)\n"
          "   0 per uscire\n");
}

int isEmpty(int head, int tail) {
   return head == tail;
}

int isFull(int head, int tail) {
   return head == tail+1;
}

void enQueue(int a[], int* head, int *tail, int value) {
   if (!isFull(*head, *tail)) {
      if (*tail != SIZE-1) {
         a[*tail] = value;
         *tail += 1;
      } else {
         *tail = 0;
         a[*tail] = value;
      }
   } else {
      printf("Full queue");
   }
}

int deQueue(int a[], int *head) {
   *head += 1;
   return a[*head-1];
}

void print(int S[], int head, int tail) {
   if (isEmpty(head, tail)) {
      printf("la pila e' vuota\n\n");
   } else {
      printf("La pila e' :\n");
      while (head != tail) {
        printf("%d --> ", S[head]);
         if (head != SIZE -1) {
            head += 1;
         } else {
            head = 0;
         }
      }
      printf("fine\n");
   }
}

int main() {
   int a[SIZE];
   int head = 0, tail = 0;

   int scelta;
   int item;

   menu();
   printf("? ");
   scanf("%d", &scelta);

   while (scelta != 0) {

      switch (scelta) {
         case 1:
            printf("Inserisci un intero: ");
            scanf("\n%d", &item);
            enQueue(a, &head, &tail, item);
            print(a, head, tail);
            break;
         case 2:
            if (!isEmpty(head, tail)) {
               item = deQueue(a, &head);
               printf("Ho estratto il valore %d \n", item);
               print(a, head, tail);
             }
            else
               printf("La pila e' vuota \n\n");
               break;
         default:
            printf("Scelta non valida.\n\n");
            menu();
            break;
      }

      printf("? ");
      scanf("%d", &scelta);
   }

   printf("arrivederci....\n");
   return 0;
}
