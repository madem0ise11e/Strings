#include <stdio.h>
#include <string.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR], b[11] = {'\0'};
  int i;

  printf("Stringa? ");
  gets(a);
  strncpy(b,a,10);
  if (strchr(b, 'A') != NULL)
    printf("Trovato\n");
  else
    printf("Non trovato\n");
  return 0;
}
