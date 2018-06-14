#include <stdio.h>

void swap (int *arr, int t);

void main (int argc, char *argv) {

  int n;
  printf("enter array size:");
  scanf("%d", &n);
  int array[n], i, t, k, j;

  for (i = 0; i < n; i++) {        
    printf("array[%i]: ", i);
    scanf("%d", (array+i));
  }

  for (i = 0; i < n; i++) {
    printf("%d ", *(array+i));
  } 
  printf("\n");
  
  for (i = 1; i < n; i++) {
    k=i;
    while ((k >= 1) && (*(array + k) < *(array + k - 1))) {
      swap (array, k);
      k--;
      //sorting stages
      // for (j = 0; j < n; j++) {
      //   printf("%d ", *(array+i));
      // }
      // printf("\n"); 
    }
  }
  printf("sorted array: ");
  for (i = 0; i < n; i++) {
    printf("%d ", *(array+i));
  } 
  printf("\n");
}

void swap (int *arr, int t) {
  int temp = *(arr+t);
  *(arr+t) = *(arr+t-1);
  *(arr+t-1) = temp; 
}