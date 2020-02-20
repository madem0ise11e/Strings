#include <stdio.h>
#include <string.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR];
  int i, L, uguali, dispari;

  printf("Introduci la stringa: ");
  gets(a);

  L = (int)strlen(a);
  uguali=1;
  dispari = L % 2;
  for(i=0; i<L/2; i++)
    if(a[i] != a[L/2+i+dispari]) {
      uguali = 0;
      break;
    }

  if (uguali)
    printf("Composta di due parti uguali\n");
  else
    printf("Non composta di due parti uguali\n");

  return 0;
}
