#include <stdio.h>
//Not working correctly, need to be fixed

void change(char s[]) {
   char str[30];
   char c;
   int j = 0;
   printf("Insert char: ");
   scanf("%c", &c);
   for (int i = 0; i < 30; i++) {
      if (s[i] != c) {
         str[j] = s[i];
         j++;
      }
   }

   str[j] = '\0';
   printf("%s\n", str);

}

void changeC(char s[]) {
   for (int i = 0; i < 30; i++) {
      if (s[i] == 'a') {
         s[i] = 'e';
      }
   }

   printf("%s\n", s);
}

int main() {
   char string[30];
   int i;

   printf("Insert here: ");

   for (i = 0; ((string[i] = getchar()) != '\n') && i < 30; i++);

   string[i] = '\0';
   changeC(string);
   change(string);
}
