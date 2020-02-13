#include <stdio.h>
#include <string.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR], b[MAXSTR];

  printf("Stringa 1? ");
  gets(a);
  printf("Stringa 2? ");
  gets(b);
  if(strcmp(a,b) >=0 )
    printf("%s\n", a);
  else
    printf("%s\n", b);

  return 0;
}
