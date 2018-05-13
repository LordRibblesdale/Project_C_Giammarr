#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Need to be finished

const Squadra {
   char name[];
   int score = 0;
};

typedef const Squadra Team;

int main() {
   srand(time(NULL));

   char name[10][] = {"Boston Uprising",
                        "Houston Outlaws",
                        "London Spitfire",
                        "New Work Excelsior",
                        "San Francisco Shock",
                        "Seoul Dynasty",
                        "Florida Mayhem",
                        "Philadelphia Fusion",
                        "Shanghai Dragons",
                        "Los Angeles Valiant"};
   Team campionato[10];
   int results[10][10];


   for (int i = 0; i < 10; i++) {
      campionato[i] -> name[] = name[i];

      for (int j = i; j < 10; j++) {
         results[i][j] = (rand() % 3) - 1;

         switch (results[i][j]) {
            case -1:
               break;
            case 0:
               campionato[i] -> score += 1;
               break;
            case 1:
               campionato[i] -> score += 2;
               break;
         }

         //for
      }
   }
}
