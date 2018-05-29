/*Scrivere una funzione che verifica se una frase (stringa) in input è palindroma.
(Per tale verifica dovranno essere ignorati gli eventuali spazi bianchi).
Scrivere un programma che prende in input da tastiera una stringa e verifica se tale stringa è palindroma.
Non è consentito utilizzare funzioni predefinite sulle stringhe.
Definire la stringa come char * stringa (non come vettore). Possibili stringhe su cui testare il programma:
- ai lati d italia
- etna gigante
- i topi non avevano nipoti
- e poi martina lavava l anitra miope
Nota1: Un modo di realizzare l'esercizio è quello di fare una prima lettura di tutta la stringa ed inserirla in una pila di char.
 Poi si fa una seconda lettura e ad ogni carattere si estrae un elemento dalla pila e si confronta
Nota2: Per poter leggere una stringa con tutti gli spazi bianchi bisogna utilizzare la funzione gets invece di scanf .
 La sintassi è: gets(s) dove s è la variabile dove memorizzare la stringa.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



 int main(void)
 {
 const int MAXDIM = 30 ; /* dimensione massima stringa di caratteri */

 char parola[MAXDIM+1] ; /* stringa di caratteri inserita */
 int numcaratteri ; /* numero di caratteri della stringa inserita */
 int palindroma ; /* flag per la ricerca */
 int i, j ; /* indici dei cicli */

 /* LEGGI LA STRINGA DI CARATTERI INSERITA DA TASTIERA */
 printf("Inserisci una parola di al massimo %d caratteri: ", MAXDIM) ;
 scanf("%s", parola) ;

 /* VISUALIZZA LA STRINGA DI CARATTERI INSERITA */
 printf("La parola inserita e: %s \n", parola) ;

 /* LEGGI IL NUMERO DI CARATTERI DELLA STRINGA */
 numcaratteri = strlen(parola) ;
 printf("La parola contiene %d caratteri\n", numcaratteri) ;

 /* CONVERTI TUTTI I CARATTERI DELLA STRINGA IN CARATTERI MINUSCOLI */
 for ( i=0; i < numcaratteri ; i++ )
 parola[i] = tolower(parola[i]) ;

 /* VISUALIZZA LA STRINGA DI CARATTERI DOPO LA CONVERSIONE */
 printf("La parola inserita scritta solo con caratteri in minuscolo e: %s\n",
 parola) ;

 /* VERIFICA SE LA STRINGA "parola" E’ PALINDROMA */

 /* INIZIALIZZA IL FLAG "palindroma". IL FLAG ASSUME I VALORI
 -- "palindroma" E’ UGUALE A 1 SE "parola" E’ PALINDROMA
44 -- "palindroma" E’ UGUALE A 0 SE "parola" NON E’ PALINDROMA
45 */
 palindroma = 1 ;

 /* IL CICLO FOR SCANDISCE LA STRINGA DI CARATTERI "parola" E VERIFICA
49 SE E’ PALINDROMA L’INDICE "i" SCORRE LA PRIMA META’ DI "parola". L’INDICE
50 "j" SCORRE LA SECONDA META’ DI "parola" PARTENDO DALL’ULTIMO CARATTERE.
51 LA RICERCA TERMINA QUANDO SI TROVA SI VERIFICA CHE LA STRINGA "parola"
52 NON E’ PALINDROMA O QUANDO SONO STATI CONSIDERATI TUTTI I CARATTERI
53 DI "parola" */

 for ( i=0, j=numcaratteri - 1 ;
 i< numcaratteri/2 && palindroma==1;
 i++, j-- )
 {
 if ( parola[i] != parola[j] )
 palindroma = 0 ;
 }

 /* STAMPA DEL RISULTATO */
 if ( palindroma == 1 )
 printf("La parola e palindroma\n") ;

 else
 printf("La parola non e palindroma\n") ;

 exit(0) ;
 }
