#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 80

int main() {
  char a[MAXSTR];
  int i, l;

  printf("Stringa? ");
  gets(a);
  l=(int)strlen(a);
  for(i=0; i<l; i++)
    a[i] = (char)toupper(a[i]);
  printf("%s\n", a);

  return 0;
}
