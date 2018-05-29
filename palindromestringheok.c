 #include <stdio.h>
#include <stdlib.h>

#define SIZE 120

 int lunghezza  (char *s)   //funzione che mi calcola la lunghezza della stringa inserita
 {
     int i,cont1=0;
     for(i=0;s[i]!='\0';i++)
     {
         cont1++;
     }
     return cont1;
 }
 void Copia1 (char s1[], char s2[])    //funzione che mi copia la stringa su un altra eliminando tutti gli spazi bianchi
{  int lungh;
    char *p1 = s1;
    char *p2= s2;
    lungh=lunghezza(s1);
    for (p1=s1; p1<=s1+lungh+1; p1++)
    {
        if (*p1!=32)  //32 è spazio bianco nella tabella ASCI
        {
            *p2=*p1;
            p2++;
        }

        if (p1==s1+lungh)
        {
            *p2= '\0';
        }
    }
}

void Copia2 (char s1[], char s2[])  //funzione che mi copia la stringa senza spazi bianchi in una nuova stringa con caratteri al contrario

{
    int lungh;
    char *p1 = s1;
    char *p2 = s2;
    lungh=lunghezza(s1);

    for (p1=s1+lungh-1; *p1!='\0'; p1--)
    {
        s2[lungh]='\0';
        *p2=*p1;
        p2++;
    }
}
void Palindroma (char a1[], char a2[])     //funzione che va a testare se le stringhe s2 e s3 ovvero quella senza spazi bianchi
{                                       // e quella al contrario sono uguali
   char *p1 = a1;
   char *p2 = a2;                       // se sono uguali allora la stringa è palindroma altrimenti non lo sono
   while (*p1!='\0' && *p2!='\0')
   {
       if (*p1==*p2)
       {
           p1++;
           p2++;
       }
       else
       {
           printf (" La stringa inserita non e' palindroma\n");
           break;
       }
   }

   if (*p1==*p2)
   {
       printf (" La stringa inserita e' palindroma\n");
   }
}
int main ()
{
    char a[SIZE];
    char b[SIZE];
    char c[SIZE];

    printf ("\n Inserisci una stringa: ");
    gets(a);

    printf ("\n");

    Copia1 (a, b);
    Copia2(b, c);
    Palindroma (b, c);

}
