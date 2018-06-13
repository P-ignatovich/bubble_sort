#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
int is_up=0;

  if (argc > 1) {  
    is_up = !strcmp(argv[1], "-up");
    if (!strcmp(argv[1], "/?")) {
    printf("-up po vozrastaniu\n");
    return 0;
    } else if (strcmp(argv[1], "-up")) {
      printf("normalno argument vvedy blyat\n");
      return 0;
    }
  }

  int n;
  printf("razmernost massiva est' yopt?\nn=");
  scanf("%d", &n);
  int array[n], i, k, t, j=0;
 
  for (i = 0; i < n; i++) {        
    printf("array[%i]: ", i);
    scanf("%d", &array[i]);
  }
  
  while (j != n - 1) {
    j = 0;
    for(i = 0; i < n - 1; i++) {
      int cond = is_up ? array[i] > array[i + 1] : array[i] < array[i + 1];
      if(cond) {
        t = array[i];
        array[i] = array[i + 1];
        array[i + 1] = t;
      } else {
        ++j;
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("%d\n", array[i]);
  }  
}
