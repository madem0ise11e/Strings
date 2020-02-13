#include <stdio.h>
#include <string.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR], b[MAXSTR];

  printf("Strnga 1? ");
  gets(a);
  printf("Stringa 2? ");
  gets(b);
  if (strlen(a) >= strlen(b))
    printf("%s\n", a);
  else
    printf("%s\n", b);
  return 0;
}
