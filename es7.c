#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR];
  int i, L, maius=0, minus=0, cifre=0;

  printf("Introduci la stringa: ");
  gets(a);

  L=(int)strlen(a);
  for(i=0; i<L; i++)
    if(isupper(a[i]))
      maius++;
    else if(islower(a[i]))
      minus++;
    else if(isdigit(a[i]))
      cifre++;

   printf("Maiuscole: %d\n", maius);
   printf("Minuscole: %d\n", minus);
   printf("Cifre: %d\n", cifre);
   printf("Altri: %d\n", L-maius-minus-cifre);

   return 0;
}
