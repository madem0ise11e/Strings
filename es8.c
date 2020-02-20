#include <string.h>
#include <stdio.h>
#define MAXSTR 80

int main () {
  char a[MAXSTR], b[MAXSTR], c[MAXSTR];
  int i, j, cont = 0;
  int la, lb;

  printf("Introduci la prima stringa: ");
  gets(a);
  printf("Introduci la seconda stringa: ");
  gets(b);
  la = (int)strlen(a);
  lb = (int)strlen(b);
  if(la < lb){
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    i = la; la = lb; lb = i;
  }

  for (i=0; i<la-lb+1; i++) {
    cont++;
    for (j=0; j<lb; j++)
      if (a[i+j] != b[j]) {
        cont--;
        break;
      }
  }
  if (cont==1)
    printf("Solo una volta\n");
  else
    printf("Non solo una volta\n");

  return 0; 
}
