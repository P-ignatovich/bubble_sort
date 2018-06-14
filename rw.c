#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  FILE *fp;
  char s[80];
  int t;
  
  if ((fp=fopen ("test", "wb+"))==NULL) {
    printf ("Невозможно открыть файл");
    exit (1);
  }

  printf("введите строку и целое число\n");
  fscanf (stdin, "%s %d", s, &t);

  fprintf (fp, "%s %d", s, t);
  fclose (fp);

  if ((fp=fopen ("test", "r"))==NULL) {
    printf ("Невозможно открыть файл");
    exit (1);
  }
  
  fscanf (fp, "%s %d", s, &t);
  fprintf (stdout, "%s %d", s, t);
  
  fclose (fp);

  return 0;
}