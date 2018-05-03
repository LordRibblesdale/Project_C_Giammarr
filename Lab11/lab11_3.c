#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int i = rand()%20;
  int a[i];
  int tmp;

  for (int i = 0; i < sizeof a / sizeof(int); i++) {
    a[i] = rand() % 3;
    printf("%d", a[i]);
  }

  printf("\n");

  

  return 0;
}
