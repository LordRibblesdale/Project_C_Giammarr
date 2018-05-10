#include <stdio.h>
//Not working correctly, need to be fixed

void change(char s[]) {
   char str[sizeof s / sizeof(char)];
   char c;
   int i, j;
   scanf("%c", c);
   for (i = 0, j = 0; i < sizeof s / sizeof(char); i++) {
      if (s[i] == c) {
         str[j] = s[i];
         j++;
      }
   }

   str[j] = '\0';
   printf("%s\n", str);

}

void changeC(char s[]) {
   int z = sizeof s / sizeof(char);
   printf("%d", z);

   for (int i = 0; i < z; i++) {
      if (s[i] == 'a') {
         s[i] = 'e';
      }
   }

   printf("%s\n", s);
}

int main() {
   char stringa[10];
   int i;

   printf("immissione con getchar\n");

   for (i = 0; ((stringa[i] = getchar()) != '\n') && i < 100; i++);

   stringa[i] = '\0';
   printf("%d", sizeof stringa / sizeof(char));
   changeC(stringa);
   change(stringa);
}
