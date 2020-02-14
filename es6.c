#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR]
  int i, L, cifre=0;

  printf("Stringa?" );
  gets(a);

  L = (int)strlen(a);
  for(i=0; i<L; i++)
    if (isdigit(a[i]))
      cifre++;

  printf("Cifre: %d\n", cifre);

  return 0;
}
