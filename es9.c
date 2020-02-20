#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR], b[MAXSTR];
  int i, L;

  printf("Introduci la stringa: ");
  gets(a);

  L = (int)strlen(a);
  for(i=0; i<L; i++)
    a[i] = (char)tolower(a[i]);

  for(i=0; i<L; i++)
    b[i] = a[L-1-i];
  b[L] = '\0';

  if (strcmp(a,b) == 0)
    printf("Palindroma\n");
  else
    printf("Non palindroma\n");

  return 0;
}
