#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR];
  int i, L, palin;

  printf("Introduci la stringa: ");
  gets(a);

  L = (int)strlen(a);
  for(i=0; i<L; i++)
    a[i] = tolower(a[i]);

  palin=1;
  for(i=0; i<L/2; i++)
    if(a[i] != a[L-1-i]) {
      palin = 0;
      break;
    }
  if(palin)
    printf("Palindroma\n");
  else
    printf("Non palindroma\n");

  return 0;
}
