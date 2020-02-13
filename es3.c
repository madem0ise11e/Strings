#include <stdio.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR];
  int cont;

  printf("Stringa? ");
  gets(a);
  cont = 0;
  while (a[cont] != '\0')
    cont++;
  printf("%d\n", cont);

  return 0;
}
