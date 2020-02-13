#include <stdio.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR];
  int i, trovato = 0;

  printf("Stringa? ");
  gets(a);
  for(i=0; i<10 && a[i] != '\0'; i++); /*(1) */
    if(a[i] == 'A')
      trovato = 1;
  if (trovato == 1)
    printf("Trovato\n");
  else
    printf("Non trovato\n");
  return 0;
}
