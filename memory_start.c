#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int *pointer;

  printf("Сколько ввести чисел:");
  scanf("%d", &n);
  pointer = malloc(n * sizeof(int));

  for(int i = 0; i < n; ++i) {
    scanf("%d", &pointer[i]);
  }

  for(int i = 0; i < n; ++i) {
    printf("%d, ", pointer[i]);
  }

  free(pointer);

  for(int i = 0; i < n; ++i) {
    printf("%d, ", pointer[i]);
  }

  return 0;
}